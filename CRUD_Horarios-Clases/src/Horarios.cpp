#include "Horarios.h"  // Incluye el archivo de encabezado de la clase Horarios
#include<iostream>  // Incluye las bibliotecas estándar de C++
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<iomanip>
#include <sstream>
#include <cstring>

using namespace std;

// Implementación de las funciones miembro de la clase Horarios

void Horarios::menu() {
    int choice;
	char x;

	do {
	    system("cls");  // Limpia la pantalla
	    // Muestra el menú principal
	    cout<<"\t\t\t-------------------------------"<<endl;
	    cout<<"\t\t\t |-  SISTEMA GESTION HORARIOS  -|"<<endl;
	    cout<<"\t\t\t-------------------------------"<<endl;
	    cout<<"\t\t\t 1. Ingreso Horarios"<<endl;
	    cout<<"\t\t\t 2. Despliegue Horarios"<<endl;
	    cout<<"\t\t\t 3. Modifica Horarios"<<endl;
	    cout<<"\t\t\t 4. Borra Horarios"<<endl;
	    cout<<"\t\t\t 5. Exit"<<endl;
	    // Solicita al usuario que ingrese su opción
	    cout<<"\t\t\t-------------------------------"<<endl;
	    cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
	    cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\tIngresa tu Opcion: ";
        cin>>choice;

        switch(choice) {
        case 1:
            // Invoca la función para ingresar horarios
            do {
                insertar();
                cout<<"\n\t\t\t Agrega otro Horario(Y,N): ";
                cin>>x;
            } while(x=='y'||x=='Y');
            break;
        case 2:
            // Invoca la función para desplegar horarios
            desplegar();
            break;
        case 3:
            // Invoca la función para modificar horarios
            modificar();
            break;
        case 4:
            // Invoca la función para borrar horarios
            borrar();
            break;
        case 5:
            // Sale del programa
            break;
        default:
            // Mensaje de error si se ingresa una opción no válida
            cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
            cin.get();
        }
    } while(choice!= 5);  // Repite el bucle hasta que se seleccione la opción de salida
}

void Horarios::insertar() {
    system("cls");  // Limpia la pantalla
    Horarios sede;  // Crea un objeto Horarios
    ofstream file("Horarios.dat", ios::binary | ios::app);  // Abre un archivo binario para escritura

    // Verifica si el archivo se pudo abrir correctamente
    if (!file) {
        cerr << "No se pudo abrir el archivo." << endl;
        return;
    }

    // Solicita al usuario que ingrese el ID del horario
    cout << "\n--------------------------------------------------------------------------------------------------------------------";
    cout << "\n------------------------------------------------- Agregar Horario -------------------------------------------------------" << endl;
    cout << "\t\t\tIngrese id de Horario       : ";
    cin.ignore();
    cin.getline(id, sizeof(id));

    // Escribe el objeto Horarios en el archivo
    file.write(reinterpret_cast<const char*>(&sede), sizeof(sede));
    file.close();  // Cierra el archivo
}

void Horarios::desplegar() {
    system("cls");  // Limpia la pantalla
    ifstream file("Horarios.dat", ios::binary);  // Abre el archivo binario para lectura

    // Verifica si el archivo se pudo abrir correctamente
    if (!file) {
        cerr << "No se pudo abrir el archivo." << endl;
        return;
    }

    int total = 0;  // Variable para contar el total de horarios
    cout << "\n-----------------------------------------Tabla Detalles de Horarios ----------------------------------------------" << endl;
    Horarios sede;  // Crea un objeto Horarios

    // Lee y muestra todos los horarios almacenados en el archivo
    while (file.read(reinterpret_cast<char*>(&sede), sizeof(sede))) {
        cout << "\t\t\t ID Horario      : " << sede.id << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
        total++;
    }

    // Mensaje si no hay horarios almacenados
    if (total == 0) {
        cout << "\n\t\t\tNo hay informacion..." << endl;
    }

    file.close();  // Cierra el archivo
    cin.ignore();  // Limpia el buffer de entrada
    system("pause");  // Pausa la ejecución hasta que se presione una tecla
}

void Horarios::modificar() {
    system("cls");  // Limpia la pantalla
    fstream file("Horarios.dat", ios::in | ios::out | ios::binary);  // Abre el archivo binario para lectura y escritura

    // Verifica si el archivo se pudo abrir correctamente
    if (!file) {
        cout << "\n\t\t\tNo hay información...";
        return;
    }

    string id_modificar;  // Variable para almacenar el ID a modificar
    int found = 0;  // Variable para indicar si se encontró el horario a modificar

    // Solicita al usuario que ingrese el ID del horario que desea modificar
    cout << "\n-------------------------------------Modificar Detalles de Horario----------------------------------------------" << endl;
    cout << "\t\t\tIngrese ID del Horario que desea modificar: ";
    cin >> id_modificar;

    Horarios sede;  // Crea un objeto Horarios
    ofstream file1("temporal.dat", ios::binary);  // Abre un archivo temporal para escritura

    // Verifica si el archivo temporal se pudo abrir correctamente
    if (!file1) {
        cout << "\n\t\t\tError al abrir el archivo temporal...";
        return;
    }

    // Lee y modifica el horario si se encuentra
    while (file.read(reinterpret_cast<char*>(&sede), sizeof(sede))) {
        if (strcmp(sede.id, id_modificar.c_str()) == 0) {
            // Solicita al usuario que ingrese el nuevo ID del horario
            cout << "\t\t\tIngrese nuevo ID del Horario: ";
            cin >> sede.id;

            file1.write(reinterpret_cast<const char*>(&sede), sizeof(sede));  // Escribe el horario modificado en el archivo temporal

            cout << "\n\t\t\tSede modificada correctamente!!!" << endl;
            found++;
        } else {
            file1.write(reinterpret_cast<const char*>(&sede), sizeof(sede));  // Escribe el horario sin modificar en el archivo temporal
        }
    }

    // Mensaje si no se encontró el horario a modificar
    if (!found) {
        cout << "\n\t\t\tNo se encontro el Horarios con el ID proporcionado." << endl;
    }

    file.close();  // Cierra el archivo original
    file1.close();  // Cierra el archivo temporal
    remove("Horarios.dat");  // Elimina el archivo original
    rename("temporal.dat", "Horarios.dat");  // Renombra el archivo temporal
    cin.ignore();  // Limpia el buffer de entrada
    system("pause");  // Pausa la ejecución hasta que se presione una tecla
}

void Horarios::borrar() {
    system("cls");  // Limpia la pantalla
    string id_borrar;  // Variable para almacenar el ID a borrar
    int found = 0;  // Variable para indicar si se encontró el horario a borrar

    // Solicita al usuario que ingrese el ID del horario que desea borrar
    cout << "\n------------------------------------------Detalles Horarios a Borrar-----------------------------------------------" << endl;

    ifstream file("Horarios.dat", ios::binary);  // Abre el archivo binario para lectura
    if (!file) {
        cout << "\n\t\t\tNo hay informacion...";
        return;
    }

    ofstream file1("temporal.dat", ios::binary);  // Abre un archivo temporal para escritura
    if (!file1) {
        cout << "\n\t\t\tError al abrir el archivo temporal...";
        return;
    }

    // Solicita al usuario que ingrese el ID del horario que desea borrar
    cout << "\n-----------------------------------------Sistema Busqueda de Horarios---------------------------------------------" << endl;
    cout << "\n\t\t Ingrese Id del Horario que quiere Borrar: ";
    cin >> id_borrar;

    Horarios sede;  // Crea un objeto Horarios
    while (file.read(reinterpret_cast<char*>(&sede), sizeof(sede))) {
        if (strcmp(sede.id, id_borrar.c_str()) == 0) {
            // Mensaje de confirmación si se encuentra el horario a borrar
            cout << "\n\t\t\tBorrado de informacion exitoso!!!!" << "\n" << endl;
            found++;
        } else {
            file1.write(reinterpret_cast<const char*>(&sede), sizeof(sede));  // Escribe el horario en el archivo temporal
        }
    }

    // Mensaje si no se encontró el horario a borrar
    if (found == 0) {
        cout << "\n\t\t\tId del Horario no encontrado...." << "\n" << endl;
    }

    file1.close();  // Cierra el archivo temporal
    file.close();  // Cierra el archivo original

    remove("Horarios.dat");  // Elimina el archivo original
    rename("temporal.dat", "Horarios.dat");  // Renombra el archivo temporal

    cin.ignore();  // Limpia el buffer de entrada
    system("pause");  // Pausa la ejecución hasta que se presione una tecla
}

// Función principal
int main() {
    Horarios obj;  // Crea un objeto de la clase Horarios
    obj.menu();  // Invoca el método menu para iniciar el programa
    return 0;
}

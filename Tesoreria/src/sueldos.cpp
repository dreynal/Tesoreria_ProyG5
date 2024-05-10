#include "sueldos.h"
#include <iostream>
#include <fstream>

using namespace std;

void sueldos::menu() {
    int choice;
    do {
        system("cls");
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t|    MENU DE SUELDOS          |" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\t 1. Base de datos de empleados" << endl;
        cout << "\t\t\t 2. Cálculo de sueldos" << endl;
        cout << "\t\t\t 3. Generación de nóminas" << endl;
        cout << "\t\t\t 4. Gestión de bonificaciones y deducciones" << endl;
        cout << "\t\t\t 5. Proceso de asignación de maestros" << endl;
        cout << "\t\t\t 6. Retorno" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tOpción a escoger:[1/2/3/4/5/6]" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tIngresa tu Opción: ";
        cin >> choice;

        switch(choice) {
            case 1:
// Implementa la funcionalidad para "Base de datos de empleados" aquí
                break;
            case 2:
                // Implementa la funcionalidad para "Cálculo de sueldos" aquí
                break;
            case 3:
                // Implementa la funcionalidad para "Generación de nóminas" aquí
                break;
            case 4:
                // Implementa la funcionalidad para "Gestión de bonificaciones y deducciones" aquí
                break;
            case 5:
                procesoAsignacionMaestros();
                break;
            case 6:
                // Implementa la funcionalidad para "Retorno" aquí
                break;
            default:
                cout << "\n\t\t\t Opción inválida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice != 6);
}

void sueldos::procesoAsignacionMaestros() {
    string nombre, especializacion, lugarImpartirClases;
    cout << "\n\tIngrese su nombre: ";
    cin.ignore(); // Limpiar el buffer de entrada
    getline(cin, nombre);
    cout << "\tIngrese su especialización (Ingeniería o Licenciatura): ";
    getline(cin, especializacion);
    cout << "\tIngrese donde quiere impartir clases (Ingeniería o Licenciatura): ";
    getline(cin, lugarImpartirClases);

    // Guardar la información en un archivo txt
    ofstream file;
    file.open("AsignacionMaestros.txt", ios::app);
    file << "Nombre: " << nombre << "\n";
    file << "Especialización: " << especializacion << "\n";
    file << "Lugar para impartir clases: " << lugarImpartirClases << "\n\n";
    file.close();

    cout << "\n\t¡La información ha sido guardada con éxito!\n";
    system("pause");
}



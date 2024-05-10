#include "matricula.h"
#include <iostream>
#include <fstream>
#include <string>
#include<stdlib.h>
//#include<conio.h>
#include<iomanip>
#include <cstdlib> // Para la generaci�n de n�meros aleatorios
#include <ctime>   // Para establecer la semilla del generador de n�meros aleatorios
using namespace std;
void matricula::menu(){
int choice;

	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t|SISTEMA DE PAGO DE MATRICULA EN LINEA|"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t  1. Pago de matricula"<<endl;
	cout<<"\t\t\t  2. Salir"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
	cout<<"\t\t\t  Opcion a escoger:[1/2]"<<endl;
	cout<<"\t\t\t---------------------------------------"<<endl;
    cout<<"\t\t\t  Ingresa tu Opcion: ";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            datosEstudiante();
        }
		break;
	case 2:
		break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
		cin.get();
	}
  }while(choice!= 2);
}
string matricula::generarNumeroCarnet() {
    srand(time(0)); // Semilla para n�meros aleatorios
    string numeroCarnet = "9959-23-";
    for (int i = 0; i < 4; ++i) {
        numeroCarnet += to_string(rand() % 10); // A�adir d�gitos aleatorios
    }
    return numeroCarnet;
};
// Funci�n para generar un n�mero aleatorio de dos d�gitos
int matricula::generarNumeroAleatorio() {
    return rand() % 100; // Generar un n�mero aleatorio entre 0 y 99
}

// Funci�n para generar un correo institucional
string matricula::generarCorreoInstitucional(string nombre, string apellido1, string apellido2) {
    // Extraer la inicial del primer nombre
    char inicialNombre = tolower(nombre[0]);

    // Convertir el primer apellido a min�scula
    for (char &c : apellido1) {
        c = tolower(c);
    }

    // Convertir el segundo apellido a min�scula
    for (char &c : apellido2) {
        c = tolower(c);
    }
    // Concatenar el primer apellido y la inicial del segundo apellido
    string correo = "";
    correo += inicialNombre;
    correo += apellido1;
    correo += apellido2[0];
    // Generar un n�mero aleatorio de dos d�gitos
    int numeroAleatorio = generarNumeroAleatorio();

    // Concatenar el dominio del correo institucional
    correo += to_string(numeroAleatorio) + "@miumg.edu.gt";

    return correo;
}
// Funci�n para generar un n�mero de boleta aleatorio
string matricula::generarNumeroBoleta() {
    srand(time(0)); // Establecer la semilla para n�meros aleatorios
    string numeroBoleta = "No.";
    for (int i = 0; i < 6; ++i) {
        numeroBoleta += to_string(rand() % 10); // A�adir d�gitos aleatorios
    }
    return numeroBoleta;
}
//string matricula::datosEstudiante(string facultad, string nombre, string apellido1, string apellido2, string fechaNacimiento, string direccion, string telefono, string DPI, string correo, string fecha;)
//string facultad, nombre, apellido1, apellido2, fechaNacimiento, direccion, fecha, telefono, DPI, correo, numeroBoleta;
//double monto;
void matricula::datosEstudiante(){
    system("cls");
    //fstream file;
      string facultad, plan, jornada, nombre, apellido1, apellido2, fechaNacimiento, direccion, telefono, DPI, correo, fecha, numeroBoleta;
      cout<<"\n-----------------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------------Creacion Matricula----------------------------------------------"<<endl;
      // Seleccionar Facultad
      cout << "Seleccione la Facultad (Ej. Ingenieria en sistemas, Ingenieria civil, etc.): ";
      cin.ignore(); // Limpiar el buffer de entrada
      getline(cin, facultad);
      cout << "Seleccione el plan(Diario, Fin de semana): ";
      getline(cin, plan);
      cout << "Seleccione la Jornada(Matutino, Vespertina): ";
      getline(cin, jornada);
      cout<<"\n-----------------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------Registro de Nuevos estudiante-----------------------------------------"<<endl;
      // Solicitar los datos del estudiante
      cout << "\n\tIngrese sus nombres: ";
      getline(cin, nombre);
      cout << "\tIngrese su primer apellido: ";
      getline(cin, apellido1);
      cout << "\tIngrese su segundo apellido: ";
      getline(cin, apellido2);
      cout << "\tIngrese su fecha de nacimiento(dd/mm/aaaa): ";
      getline(cin, fechaNacimiento);
      cout << "\tIngrese su Direccion de Residencia: ";
      getline(cin, direccion);
      cout << "\tIngrese su Telefono celular: ";
      getline(cin, telefono);
      cout << "\tIngrese su DPI(CUI): ";
      getline(cin, DPI);
      cout << "\tIngrese su Correo Electronico Personal: ";
      getline(cin, correo);
      cout << "\tFecha de ingreso de informacion(dd/mm/aaaa): ";
      getline(cin, fecha);
      cout << "\n\t\t--------- Monto de la matricula: Q10.00 ---------"<<"\n"<<endl;
      system("pause");
      pagarEnLinea();

      // Generar n�mero de carnet y correo institucional
      string numeroCarnet = generarNumeroCarnet();
      string correoInstitucional = generarCorreoInstitucional(nombre, apellido1, apellido2);
      cout<<"\n\n-----------------------------------------------------------------------------------------------------------------"<<endl;
      cout << "\t\t\t�Su pago de matricula ha sido procesado con exito!" << endl;
      cout << "\t\t\tNumero de carnet: " << numeroCarnet << endl;
      cout << "\t\t\tSu Correo institucional es: " << correoInstitucional << endl;
      //file.open("Matricula.txt", ios::app | ios::out);
      ofstream file("Matricula.dat", ios::binary | ios::app);
      //file<<"-------------------------------------------DATOS DEL ESTUDIANTE-------------------------------------------"<<"\n";
      file.write(reinterpret_cast<char*>(&facultad), sizeof(facultad));
      file.write(reinterpret_cast<char*>(&plan), sizeof(plan));
      file.write(reinterpret_cast<char*>(&jornada), sizeof(jornada));
      file.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
      file.write(reinterpret_cast<char*>(&apellido1), sizeof(apellido1));
      file.write(reinterpret_cast<char*>(&apellido2), sizeof(apellido2));
      file.write(reinterpret_cast<char*>(&fechaNacimiento), sizeof(fechaNacimiento));
      file.write(reinterpret_cast<char*>(&direccion), sizeof(direccion));
      file.write(reinterpret_cast<char*>(&telefono), sizeof(telefono));
      file.write(reinterpret_cast<char*>(&DPI), sizeof(DPI));
      file.write(reinterpret_cast<char*>(&correo), sizeof(correo));
      file.write(reinterpret_cast<char*>(&fecha), sizeof(fecha));
      file.write(reinterpret_cast<char*>(&numeroCarnet), sizeof(numeroCarnet));
      file.write(reinterpret_cast<char*>(&correoInstitucional), sizeof(correoInstitucional));
      //file<<"facultad: "<<facultad <<"\n"<<"Plan: "<<plan <<"\n"<<"Jornada: "<<jornada <<"\n"<<"Nombre completo: "<<nombre<< " " << apellido1 << " " << apellido2<< "\n"<<"Fecha de nacimiento: "<< fechaNacimiento<< "\n";
      //file<<"Direccion de Residencia: "<<direccion<<"\n"<<"Telefono celular: "<<telefono<<"\n"<<"DPI(CUI): "<<DPI<<"\n"<<"Correo electronico: "<<correo<<"\n"<<"Fecha de ingreso de informacion: "<<fecha<< "\n";
      //file<<"Numero de carnet: " << numeroCarnet <<"\n" <<"Correo Institucional: "<<correoInstitucional<<"\n";
      //file<<"----------------------------------------------------------------------------------------------------------"<<"\n";
      file.close();
      system("pause");
      system("cls");
      //fstream file2;
      // Generar el n�mero de boleta
      numeroBoleta = generarNumeroBoleta();
      // Mostrar el comprobante de pago
      cout<<"\n----------------------------------------------------------------------------------------------------------";
      cout<<"\n-------------------------------------------Comprobante de pago -------------------------------------------"<<endl;
      cout << "\t\t\tNumero de boleta: " << numeroBoleta << endl;
      cout << "\t\t\tNumero de carnet: " << numeroCarnet << endl;
      cout << "\t\t\tNombre completo: " << nombre << " " << apellido1 << " " << apellido2 << endl;
      cout << "\t\t\tFecha de pago: " << fecha << endl;
      cout << "\t\t\tMonto de la matricula: Q10.00" <<"\n"<< endl;
      ofstream file2("Boleta_Pago.dat", ios::binary | ios::app);
      //file2.open("Boleta_Pago.txt", ios::app | ios::out);
      file2.write(reinterpret_cast<char*>(&numeroBoleta), sizeof(numeroBoleta));
      file2.write(reinterpret_cast<char*>(&numeroCarnet), sizeof(numeroCarnet));
      file2.write(reinterpret_cast<char*>(&nombre), sizeof(nombre));
      file2.write(reinterpret_cast<char*>(&apellido1), sizeof(apellido1));
      file2.write(reinterpret_cast<char*>(&apellido2), sizeof(apellido2));
      file2.write(reinterpret_cast<char*>(&fecha), sizeof(fecha));
      file2.close();

      //file2<<"-------------------------------------------COMPROBANTE DE PAGO-------------------------------------------"<<"\n";
      //file2<<"Numero de boleta: "<<numeroBoleta<<"\n"<<"Numero de carnet: "<<numeroCarnet<<"\n"<<"Nombre completo: "<<nombre<< " " << apellido1 << " " << apellido2<<"\n";
      //file2<<"Fecha de pago: "<<fecha<<"\n"<<"Monto de la matricula: Q10.00"<< "\n";
      //file2<<"---------------------------------------------------------------------------------------------------------"<<"\n";
      //file2.close();
      system("pause");
}
/*
void matricula::pagarEnLinea() {
    system("cls");
    cout<<"\n----------------------------------------------------------------------------------------------------------";
    cout<<"\n-------------------------------------------DATOS DE LA TARJETA--------------------------------------------"<<endl;
    string numeroTarjeta, fechaExpiracion, codigoSeguridad, nombreTitular;
    cout << "\n\t\t\t Numero de tarjeta: ";
    cin.ignore();
    getline(cin, numeroTarjeta);
    cout << "\t\t\t Fecha de expiracion (MM/AA): ";
    getline(cin, fechaExpiracion);
    cout << "\t\t\t Codigo de seguridad: ";
    getline(cin, codigoSeguridad);
    cout << "\t\t\t Nombre del titular: ";
    getline(cin, nombreTitular);
    cout<<"\n----------------------------------------------------------------------------------------------------------"<<endl;
    // You can save this information to a file or process it as needed for online payment
    // For example:
    ofstream file("PagoEnLinea.dat", ios::binary | ios::app);
    file.write(reinterpret_cast<char*>(&numeroTarjeta), sizeof(numeroTarjeta));
    file.write(reinterpret_cast<char*>(&fechaExpiracion), sizeof(fechaExpiracion));
    file.write(reinterpret_cast<char*>(&codigoSeguridad), sizeof(codigoSeguridad));
    file.write(reinterpret_cast<char*>(&nombreTitular), sizeof(nombreTitular));
    file.close();

    system("pause");
}*/

void matricula::pagarEnLinea() {
    system("cls");
    cout << "Ingrese los datos de su tarjeta de cr�dito para realizar el pago en l�nea:" << endl;
    string numeroTarjeta, fechaExpiracion, codigoSeguridad;
    cout << "N�mero de tarjeta: ";
    cin.ignore();
    getline(cin, numeroTarjeta);
    cout << "Fecha de expiraci�n (MM/AA): ";
    getline(cin, fechaExpiracion);
    cout << "C�digo de seguridad: ";
    getline(cin, codigoSeguridad);

    // Verificar el saldo en la tarjeta
    crearTarjeta();
    double saldoDisponible = obtenerSaldoTarjeta();
    if (saldoDisponible >= 10.00) {
        cout << "\n�Pago realizado en l�nea con �xito!" << endl;
        cout << "Monto pagado: Q10.00" << endl;
        cout << "Saldo disponible en la tarjeta: Q" << saldoDisponible - 10.00 << endl;
        // Actualizar el saldo en el archivo despu�s del pago
        actualizarSaldoTarjeta(saldoDisponible - 10.00);
    } else {
        cout << "\n�No hay fondos suficientes en la tarjeta para realizar el pago!" << endl;
        cout << "Saldo disponible en la tarjeta: Q" << saldoDisponible << endl;
    }

    system("pause");
}

void matricula::crearTarjeta() {
    system("cls");
    ofstream outFile("tarjeta.txt");
    if (!outFile.is_open()) {
        cout << "Error al crear el archivo de tarjeta." << endl;
        return;
    }

    // Generar los datos de la tarjeta
    string numeroTarjeta, fechaExpiracion, codigoSeguridad;
    numeroTarjeta = generarNumeroTarjeta();
    fechaExpiracion = generarFechaExpiracion();
    codigoSeguridad = generarCodigoSeguridad();

    // Escribir los datos en el archivo

    outFile << "N�mero de tarjeta: " << numeroTarjeta << endl;
    outFile << "Fecha de expiraci�n: " << fechaExpiracion << endl;
    outFile << "C�digo de seguridad: " << codigoSeguridad << endl;
    outFile << "Saldo disponible: Q2000.00" << endl;

    outFile.close();

    cout << "Tarjeta creada exitosamente." << endl;
    system("pause");
}

string matricula::generarNumeroTarjeta() {
    // Generar un n�mero de tarjeta aleatorio de 16 d�gitos
    string numeroTarjeta = "4"; // El prefijo "4" es com�n para tarjetas de cr�dito Visa
    for (int i = 1; i <= 15; ++i) {
        numeroTarjeta += to_string(rand() % 10); // A�adir d�gitos aleatorios
    }
    return numeroTarjeta;
}

string matricula::generarFechaExpiracion() {
    // Generar una fecha de expiraci�n aleatoria (MM/AA)
    int mes = 1 + rand() % 12; // Mes entre 1 y 12
    int anio = 21 + rand() % 10; // A�o entre 2021 y 2030
    return to_string(mes) + "/" + to_string(anio);
}

string matricula::generarCodigoSeguridad() {
    // Generar un c�digo de seguridad aleatorio de 3 d�gitos
    string codigoSeguridad = "";
    for (int i = 0; i < 3; ++i) {
        codigoSeguridad += to_string(rand() % 10); // A�adir d�gitos aleatorios
    }
    return codigoSeguridad;
}

double matricula::obtenerSaldoTarjeta() {
    ifstream inFile("tarjeta.txt");
    if (!inFile.is_open()) {
        cout << "Error al abrir el archivo de tarjeta." << endl;
        return 0.0;
    }

    string saldoStr;
    while (getline(inFile, saldoStr)) {
        size_t pos = saldoStr.find("Saldo disponible: Q");
        if (pos != string::npos) {
            double saldo = stod(saldoStr.substr(pos + 21));
            inFile.close();
            return saldo;
        }
    }

    inFile.close();

    cout << "Error al obtener el saldo de la tarjeta." << endl;
    return 0.0;
}

void matricula::actualizarSaldoTarjeta(double nuevoSaldo) {
    ifstream inFile("tarjeta.txt");
    if (!inFile.is_open()) {
        cout << "Error al abrir el archivo de tarjeta." << endl;
        return;
    }

    ofstream outFile("temp.txt");
    if (!outFile.is_open()) {
        cout << "Error al crear el archivo temporal." << endl;
        return;
    }

    string line;
    while (getline(inFile, line)) {
        size_t pos = line.find("Saldo disponible: Q");
        if (pos != string::npos) {
            outFile << "Saldo disponible: Q" << nuevoSaldo << endl;
        } else {
            outFile << line << endl;
        }
    }

    inFile.close();
    outFile.close();

    remove("tarjeta.txt");
    rename("temp.txt", "tarjeta.txt");

    cout << "Saldo de la tarjeta actualizado exitosamente." << endl;
}

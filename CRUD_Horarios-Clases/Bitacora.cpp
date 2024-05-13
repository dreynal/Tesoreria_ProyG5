#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

// Función para registrar eventos en la bitácora
void registrarEvento(const string& evento) {
    // Obtener la hora actual
    time_t now = time(0);
    tm* local_time = localtime(&now);
    
    // Abrir el archivo de bitácora en modo de escritura (añadir al final)
    ofstream bitacora("bitacora.txt", ios::app);
    
    // Verificar si el archivo se abrió correctamente
    if (bitacora.is_open()) {
        // Escribir el evento junto con la hora actual en el archivo
        bitacora << "[" << local_time->tm_mday << "/" << (local_time->tm_mon + 1) << "/" << (local_time->tm_year + 1900)
                 << " " << local_time->tm_hour << ":" << local_time->tm_min << ":" << local_time->tm_sec << "] "
                 << evento << endl;
        // Cerrar el archivo de bitácora
        bitacora.close();
        cout << "Evento registrado en la bitácora." << endl;
    } else {
        // Mostrar un mensaje de error si no se pudo abrir el archivo
        cout << "Error al abrir el archivo de bitácora." << endl;
    }
}

int main() {
    // Registrar eventos para cada archivo que proporcionaste
    registrarEvento("Archivo 'Horarios.h' creado.");
    registrarEvento("Archivo 'Matutino.cpp' creado.");
    registrarEvento("Archivo 'Vespertino.cpp' creado.");
    registrarEvento("Archivo 'Findesemana.cpp' creado.");

    // Mensaje final
    cout << "Bitácora actualizada con los eventos." << endl;

    return 0;
}

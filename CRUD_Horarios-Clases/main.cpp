#include <iostream>
#include <fstream>
#include "Horarios.h" // Incluye el archivo de encabezado de la clase Horarios

using namespace std;

// Prototipos de funciones
void catalogos(); // Función para el menú de catálogos
void menuGeneral(); // Función para el menú general

// Función principal
int main()
{
    menuGeneral(); // Llama a la función para mostrar el menú general
    system("cls"); // Limpia la pantalla
    cout<<"** Hasta la proxima **"; // Mensaje de despedida
    return 0;
}

// Función para mostrar el menú general
void menuGeneral()
{
    system("cls"); // Limpia la pantalla
    int choice;
    do
    {
        system("cls"); // Limpia la pantalla
        // Muestra el menú general
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t |  Menu para correr los CRUD |"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\t 1. Catalogos"<<endl;
        cout<<"\t\t\t 2. Procesos"<<endl;
        cout<<"\t\t\t 3. Reportes"<<endl;
        cout<<"\t\t\t 4. Ayuda"<<endl;
        cout<<"\t\t\t 5. Salir del Sistema"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5]"<<endl;
        cout<<"\t\t\t-------------------------------"<<endl;
        cout<<"\t\t\tIngresa tu Opcion: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                catalogos(); // Llama a la función para mostrar el menú de catálogos
                break;
            case 2:
                // Procesos (aún no implementado)
                break;
            case 3:
                // Reportes (aún no implementado)
                break;
            case 4:
                // Ayuda (aún no implementado)
                break;
            case 5:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice!= 5); // Repite el bucle hasta que se seleccione la opción de salir
}

// Función para mostrar el menú de catálogos
void catalogos()
{
    int choice;
    
    do {
        system("cls"); // Limpia la pantalla
        // Muestra el menú de catálogos
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\t | Sistema para ejecutar CRUD - Catalogos  |"<<endl;
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\t 1. Matutina"<<endl;
        cout<<"\t\t\t 2. Vespertina"<<endl;
        cout<<"\t\t\t 3. Fin de semana"<<endl;
        cout<<"\t\t\t 4. Retornar menu anterior"<<endl;
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\tIngresa tu Opcion: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
            {
                Matutino matutina; // Crea un objeto de la clase Matutino
                matutina.menu(); // Llama al menú de la clase Matutino
            }
            break;
            case 2:
                //display(); // Función aún no implementada
                {
                    Vespertino vespertina; // Crea un objeto de la clase Vespertino
                    vespertina.menu(); // Llama al menú de la clase Vespertino
                }
                break;
            case 3:
                {
                    Findesemana findesemana; // Crea un objeto de la clase Findesemana
                    findesemana.menu(); // Llama al menú de la clase Findesemana
                }
                break;
            case 4:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice!= 4); // Repite el bucle hasta que se seleccione la opción de retorno al menú anterior
}

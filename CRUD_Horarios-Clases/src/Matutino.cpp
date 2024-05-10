#include "Horarios.h"
#include <iostream>

using namespace std;

void Matutino::menu() {
    int choice;
    do {
        system("cls");
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\t | Sistema para ejecutar CRUD - Matutino  |"<<endl;
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\t 1. Amatitlan"<<endl;
        cout<<"\t\t\t 2. Boca del monte"<<endl;
        cout<<"\t\t\t 3. Chinautla"<<endl;
        cout<<"\t\t\t 4. La Florida, zona 19"<<endl;
        cout<<"\t\t\t 5. El naranjo, Mixco"<<endl;
        cout<<"\t\t\t 6. Portales"<<endl;
        cout<<"\t\t\t 7. San Jose Pinula"<<endl;
        cout<<"\t\t\t 8. Sede Zona 16 (Santo Rosita)"<<endl;
        cout<<"\t\t\t 9. San Juan Sacatepequez"<<endl;
        cout<<"\t\t\t 10. Villa nueva"<<endl;
        cout<<"\t\t\t 11. Alta Verapaz - Coban"<<endl;
        cout<<"\t\t\t 12. Baja Verapaz - Salama"<<endl;
        cout<<"\t\t\t 13. Peten"<<endl;
        cout<<"\t\t\t 14. Puerto Barrios"<<endl;
        cout<<"\t\t\t 15. Morales"<<endl;
        cout<<"\t\t\t 16. Chiquimula"<<endl;
        cout<<"\t\t\t 17. Zacapa"<<endl;
        cout<<"\t\t\t 18. Guastatoya"<<endl;
        cout<<"\t\t\t 19. Sanarate"<<endl;
        cout<<"\t\t\t 20. Jutiapa"<<endl;
        cout<<"\t\t\t 21. Jalpatagua"<<endl;
        cout<<"\t\t\t 22. Santa Catarina Mita"<<endl;
        cout<<"\t\t\t 23. Jalapa"<<endl;
        cout<<"\t\t\t 24. Santa Rosa - Cuilapa"<<endl;
        cout<<"\t\t\t 25. Nueva Santa Rosa"<<endl;
        cout<<"\t\t\t 26. Chiquimulilla"<<endl;
        cout<<"\t\t\t 27. Chimaltenango"<<endl;
        cout<<"\t\t\t 28. Escuintla"<<endl;
        cout<<"\t\t\t 29. Nueva Concepcion"<<endl;
        cout<<"\t\t\t 30. Santa Lucia Cotzumalguapa"<<endl;
        cout<<"\t\t\t 31. Sacatepequez - La antigua guatemala"<<endl;
        cout<<"\t\t\t 32. Quetzaltenango"<<endl;
        cout<<"\t\t\t 33. Coatepeque"<<endl;
        cout<<"\t\t\t 34. Retalhuleu"<<endl;
        cout<<"\t\t\t 35. San Marcos - San Pedro Sacatepequez"<<endl;
        cout<<"\t\t\t 36. San Marcos - Malacatan"<<endl;
        cout<<"\t\t\t 37. Solola"<<endl;
        cout<<"\t\t\t 38. Suchitepequez - Mazatenango"<<endl;
        cout<<"\t\t\t 39. Totonicapan"<<endl;
        cout<<"\t\t\t 40. Quiche"<<endl;
        cout<<"\t\t\t 41. Jacaltenango, Huehuetenango"<<endl;
        cout<<"\t\t\t 42. Retornar al menú anterior"<<endl;
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\tIngresa tu Opcion: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout <<"Lunes a viernes de 9:00 a 12:00">>
                break;
            case 2:
                cout <<"Lunes a viernes de 08:00 a 12:00">>
                break;
            case 3:
                cout <<"Lunes a viernes de 8:00am a 12:00pm">>
                break;
            case 4:
                cout <<" Lunes a viernes: 09:00 a 12:00 horas">>
                break;
            case 5:
                cout <<"  Lunes a viernes 09:00 - 12:00">>
                break;
            case 6:
                cout <<" Lunes a Viernes de 08:00 a 12:00">>
                break;
            case 7:
                cout <<"  Lunes a viernes de 09:00 a 12:00 hrs">>
                break;
            case 8:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 9:
                cout <<" Lunes a viernes de 8:00 a 12:00 hrs.">>
                break;
            case 10: 
                cout <<" Lunes a viernes de 07:00 a 12:00 horas.">>
                break;
            case 11:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 12:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 13:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 14:
                cout <<" No disponible">>
                break;
            case 15:
                cout <<" No disponible">>
                break;
            case 16:
                cout <<"  Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 17:
                cout <<" No disponible">>
                break;
            case 18:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 19:
                cout <<" No disponible">>
                break;
            case 20: 
                cout <<" Lunes a viernes de 08:00 a 12:00 horas.">>
                break;
            case 21:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 22:
                cout <<"  Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 23:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 24:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 25:
                cout <<"  No disponible">>
                break;
            case 26:
                cout <<" No disponible">>
                break;
            case 27:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 28:
                cout <<"  Lunes a viernes de 07:00 a 12:00 horas">>
                break;
            case 29:
                cout <<"  Lunes a viernes de 12:00 a 19:00 horas">>
                break;
            case 30: 
                cout <<" No disponible">>
                break;
            case 31:
                cout <<"  Lunes a viernes de 07:00 a 12:00 horas">>
                break;
            case 32:
                cout <<" Lunes a sábados 08:00 a 12:00 horas.">>
                break;
            case 33:
                cout <<"  No disponible">>
                break;
            case 34:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 35:
                cout <<" Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 36:
                cout <<" No disponible">>
                break;
            case 37:
                cout <<" Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 38:
                cout <<"  Lunes a viernes de 08:00 a 12:00 horas">>
                break;
            case 39:
                cout <<"  Lunes a viernes de 09:00 a 12:00 horas">>
                break;
            case 40: 
                cout <<" No disponible">>
                break;
            case 41: 
                cout <<" No disponible">>
                break;
            case 42:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice!= 4);
}

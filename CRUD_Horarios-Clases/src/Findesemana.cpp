#include "Horarios.h"
#include <iostream>

using namespace std;

void Findesemana::menu() {
    int choice;
    do {
        system("cls");
        cout<<"\t\t\t--------------------------------------------"<<endl;
        cout<<"\t\t\t | Sistema para ejecutar CRUD - Findesemana  |"<<endl;
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
                cout <<"Sábado de 7:00 a 16:00 - Domingo de 7:00 a 16:00">>
                break;
            case 2:
                cout <<"Sábados 07:00 a 16:00">>
                break;
            case 3:
                cout <<"Sábado de 8:00am a 15:00 pm">>
                break;
            case 4:
                cout <<" Sábado: de 08:00 a 17:00 horas">>
                break;
            case 5:
                cout <<" Sábado 07:00 de 16:30">>
                break;
            case 6:
                cout <<" Sábado 09:00 a 16:00 - Domingo 09:00 a 13:00">>
                break;
            case 7:
                cout <<" sábados de 09:00 a 17.00 hrs.">>
                break;
            case 8:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 9:
                cout <<" Sábado de 07:00 a 16:00 hrs.">>
                break;
            case 10: 
                cout <<" Sábado de 07:00 a 13:00 horas - Domingo de 07:00 a 13:00 horas.">>
                break;
            case 11:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 12:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 13:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 14:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 15:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 16:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 17:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 18:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 19:
                cout <<" Sábado de 08:00 a 21:00 horas">>
                break;
            case 20: 
                cout <<" Sábado de 08:00 a 17:00 horas.">>
                break;
            case 21:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 22:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 23:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 24:
                cout <<" Sábado de 07:00 a 18:00">>
                break;
            case 25:
                cout <<" Sábado de 07:00 a 18:00">>
                break;
            case 26:
                cout <<" Sábado de 07:00 a 17:30">>
                break;
            case 27:
                cout <<" Sábado de 08:00 a 17:00 horas">>
                break;
            case 28:
                cout <<" Sábado de 07:00 a 17:00 horas">>
                break;
            case 29:
                cout <<" Sábado de 07:00 a 18:00 horas">>
                break;
            case 30: 
                cout <<" Sábado 07:00 a 17:00 horas">>
                break;
            case 31:
                cout <<" Domingos 09:00 a 13:00 y 14:00 a 17:00 horas.">>
                break;
            case 32:
                cout <<" Sábado de 7:00 a 16:00 horas - Domingo de 8:00 a 12:00 horas.">>
                break;
            case 33:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 34:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 35:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 36:
                cout <<" Sábado de 07:00 a 18:00">>
                break;
            case 37:
                cout <<" Sábado de 08:00 a 17:00">>
                break;
            case 38:
                cout <<" Sábado de 07:00 a 17:00">>
                break;
            case 39:
                cout <<" Sábado de 07:00 a 18:00 horas">>
                break;
            case 40: 
                cout <<" Sábado de 07:00 a 16:00">>
                break;
            case 41: 
                cout <<" Sábado de 07:00 a 17:30">>
                break;
            case 42:
                break;
            default:
                cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
                cin.get();
        }
    } while(choice!= 4);
}

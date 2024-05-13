#ifndef Horarios_H
#define Horarios_H
#include <iostream>

using namespace std;

class Horarios
{
    private:
        char id[10];
	public:
		void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();
};
class Matutino {
public:
    void menu();
};

class Vespertino {
public:
    void menu();
};

class Findesemana {
public:
    void menu();
};
#endif 

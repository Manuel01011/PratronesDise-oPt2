#pragma once
#include"Lista.h"

class estudiante {

private:
	string nombre;
	int edad;
	string carrera;
public:

	estudiante(string _nombre, int _edad, string _carrera);

	virtual~estudiante();

	string tostring();

	int operator+(estudiante& a);

};

#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Persona {

private:
	string cedula;
	string nombre;
	string apellido;

public:
	Persona();
	Persona(string _cedula, string _nombre, string _apellido);
	virtual~Persona();
	string getCedula();
	string getNombre();
	string getApellido();
	string tostring();
};
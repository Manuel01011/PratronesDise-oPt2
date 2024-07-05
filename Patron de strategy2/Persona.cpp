#include "Persona.h"

Persona::Persona(){

}

Persona::Persona(string _cedula, string _nombre, string _apellido){
	cedula = _cedula;
	nombre = _nombre;
	apellido = _apellido;
}

Persona::~Persona(){

}

string Persona::getCedula(){
	return cedula;
}

string Persona::getNombre(){
	return nombre;
}

string Persona::getApellido(){
	return apellido;
}

string Persona::tostring(){
	stringstream c;
	c << nombre << "               " << apellido << "               " << cedula << endl;
	return c.str();
}

#include "Estudiantes.h"

estudiante::estudiante(string _nombre, int _edad, string _carrera){
	nombre = _nombre;
	edad = _edad;
	carrera = _carrera;
}

estudiante::~estudiante(){

}

string estudiante::tostring(){
	stringstream c;

	c << "Nombre: " << nombre << endl;
	c << "Edad: " << edad << endl;
	c << "Carrera: " << carrera << endl;

	return c.str();
}

int estudiante::operator+(estudiante& a){

	int total;

	total = this->edad + a.edad;

	return total;
}

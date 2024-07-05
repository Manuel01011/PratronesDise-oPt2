#include "CintadeGrabacion.h"

Cinta::Cinta(string _codigo, string _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}

Cinta::~Cinta() {

}

string Cinta::tostring() {
	stringstream c;
	cout << "------Medio Tipo Cinta------" << endl;
	cout << "Codigo: " << codigo << endl;
	cout << "Nombre: " << nombre << endl;
	return c.str();
}

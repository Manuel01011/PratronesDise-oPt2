#include "GrabadorNuevo.h"

GrabadorNuevo::GrabadorNuevo(string _codigo, string _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}

GrabadorNuevo::~GrabadorNuevo(){

}

string GrabadorNuevo::tostring(){
	stringstream c;
	c << "------Grabador Nuevo------" << endl;
	c << "Codigo: " << codigo << endl;
	c << "Nombre: " << nombre << endl;
	return c.str();
}

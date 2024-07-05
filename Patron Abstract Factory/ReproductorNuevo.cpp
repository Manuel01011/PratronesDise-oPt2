#include "ReproductorNuevo.h"
ReproductorNuevo::ReproductorNuevo(string _codigo, string _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}

ReproductorNuevo::~ReproductorNuevo() {

}

string ReproductorNuevo::tostring() {
	stringstream c;
	c << "------Reproductor Nuevo------" << endl;
	c << "Codigo: " << codigo << endl;
	c << "Nombre: " << nombre << endl;
	return c.str();
}

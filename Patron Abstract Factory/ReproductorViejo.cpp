#include "ReproductorViejo.h"

ReproductorViejo::ReproductorViejo(string _codigo, string _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}

ReproductorViejo::~ReproductorViejo() {

}

string ReproductorViejo::tostring() {
	stringstream c;
	c << "------Reproductor Viejo------" << endl;
	c << "Codigo: " << codigo << endl;
	c << "Nombre: " << nombre << endl;
	return c.str();
}

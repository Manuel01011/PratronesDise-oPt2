#include "GrabadorViejo.h"

GrabadorViejo::GrabadorViejo(string _codigo, string _nombre) {
	codigo = _codigo;
	nombre = _nombre;
}

GrabadorViejo::~GrabadorViejo() {

}

string GrabadorViejo::tostring() {
	stringstream c;
	c << "------Grabador Viejo------" << endl;
	c << "Codigo: " << codigo << endl;
	c << "Nombre: " << nombre << endl;
	return c.str();
}

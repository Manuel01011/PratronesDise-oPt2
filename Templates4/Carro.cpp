#include "Carro.h"

Carro::Carro(string _marca, string _color){
	marca = _marca;
	color = _color;
}

Carro::~Carro(){
}

string Carro::tostring(){
	stringstream c;
	c << "Marca .... " << marca << endl;
	c << "Color .... " << color << endl<<endl;
	return c.str();
}

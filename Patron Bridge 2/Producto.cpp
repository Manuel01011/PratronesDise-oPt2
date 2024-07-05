#include "Producto.h"

Producto::Producto(string _codigo, double _valor) {
	codigo = _codigo;
	valor = _valor;
}

Producto::~Producto() {

}

double Producto::getValor() {
	return valor;
}

string Producto::getCodigo() {
	return codigo;
}

string Producto::tostring() const {
	stringstream c;
	c << "--------------------" << endl;
	c << "Codigo" << endl;
	c << "Valor: " << valor << endl;
	c << "--------------------" << endl << endl;
	return c.str();
}

char Producto::getPrimerCaracterDelCodigo() {
	return this->getCodigo()[0];//el string se puede tratar como un vector
}

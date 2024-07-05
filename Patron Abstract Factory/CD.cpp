#include "CD.h"

CD::CD(string _codigo, string _nombre){
 codigo =_codigo;
 nombre = _nombre;
}

CD::~CD(){

}

string CD::tostring(){
	stringstream c;
	cout << "------Medio Tipo CD------" << endl;
	cout << "Codigo: " << codigo << endl;
	cout << "Nombre: " << nombre << endl;
	return c.str();
}

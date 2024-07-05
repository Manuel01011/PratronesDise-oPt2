#include "ListaEstudiantes.h"

ListaEstudinates::ListaEstudinates(){
	listaestu = new lista<estudiante>();
}

ListaEstudinates::~ListaEstudinates(){

}

void ListaEstudinates::Ingresar(estudiante* a){
   listaestu->ingresar(a);
}

string ListaEstudinates::tostring(){
	return listaestu->tostring();
}

ListaEstudinates& ListaEstudinates::operator()(string){
	cout << listaestu->tostring();
	return *this;
}



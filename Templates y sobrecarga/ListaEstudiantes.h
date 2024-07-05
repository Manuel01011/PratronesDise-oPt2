#pragma once
#include"Lista.h"
#include"Estudiantes.h"

class ListaEstudinates {
private:
	lista<estudiante>* listaestu;
public:

	ListaEstudinates();

	virtual~ListaEstudinates();

	void Ingresar(estudiante* a);

	string tostring();

	ListaEstudinates& operator()(string);
};
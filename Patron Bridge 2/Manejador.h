#pragma once
#include"Implementacion1.h"
#include"Implementacion2.h"
#include"Implementacion3.h"
#include"ContenedorProductos.h"

class Manejador {//manejador...
private:
	Puente* Implementacion;
	Contenedor* conte;
public:

	//costructor numero 1 -> el mas usual
	Manejador(Puente* _puente,Contenedor* _conte);

	//constructor numero 2
	Manejador(int tipo, Contenedor* _conte);
	virtual~Manejador();

	//interfaz que conoce le cliente 
	void mostrarTotales();
	void listar();
};
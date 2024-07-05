#pragma once
#include<iostream>
#include<sstream>
#include"ContenedorProductos.h"

class Puente {//<<Abstract>>
public:
	virtual void mostrarTotales(Contenedor* a) = 0;
	virtual void listaProductos(Contenedor* a) = 0;

};
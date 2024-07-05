#pragma once
#include"Carro.h"
#include"Lista.h"

class ListaCarros {

private:
	lista<Carro>* lisCarros;
public:

	ListaCarros();

	virtual~ListaCarros();

	void insertaCarro(Carro* car);

	string tostring();

};
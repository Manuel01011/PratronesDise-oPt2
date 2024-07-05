#pragma once
#include"Nodo.h"

template<class N>

class lista {

private:
	Nodo<N>* primero;
	int cantidad;
public:

	lista();

	bool estavacia();

	void insertar(N* _nodo);

	string tostring();

};

template<class N>
lista<N>::lista(){
	primero = nullptr;
	cantidad = 0;
	cout << "Lista generica creada " << endl;
}

template<class N>
bool lista<N>::estavacia(){
	return (primero == nullptr);
}

template<class N>
void lista<N>::insertar(N* _nodo){

	Nodo<N>* a = new Nodo<N>(_nodo);
	Nodo<N>* aux = primero;

	if (estavacia()) {
		primero = a;
	}
	else {
		while (aux->getSiguiente()) {
			aux = aux->getSiguiente();
		}
		aux->setSiguiente(a);
	}
	cantidad++;
}

template<class N>
string lista<N>::tostring(){
	stringstream c;

	Nodo<N>* aux = primero;

	while (aux){
		c << aux->getElemento()->tostring();
		aux = aux->getSiguiente();
	}

	return c.str();
}


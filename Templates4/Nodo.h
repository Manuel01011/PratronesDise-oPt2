#pragma once
#include<iostream>
#include<sstream>

using namespace std;

template<class N>

class Nodo {

private:
	N* elemento;
	Nodo<N>* siguiente;
public:

	Nodo(N* _elemnto);

	Nodo<N>* getSiguiente();

	void setSiguiente(Nodo<N>* _sig);

	N* getElemento();

};

template<class N>
inline Nodo<N>::Nodo(N* _elemnto){
	elemento = _elemnto;
	siguiente = nullptr;
}

template<class N>
inline Nodo<N>* Nodo<N>::getSiguiente(){
	return siguiente;
}

template<class N>
inline void Nodo<N>::setSiguiente(Nodo<N>* _sig){
	siguiente = _sig;
}

template<class N>
inline N* Nodo<N>::getElemento(){
	return elemento;
}

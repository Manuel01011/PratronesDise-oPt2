#pragma once
#include"Nodo.h"

template <class T>

class lista {

private:
	Nodo<T>* principio;
	int cantidad;

public:

	lista();

	virtual~lista();

	bool estavacia();

	void ingresar(T* _a);

	string tostring();

};

template<class T>
lista<T>::lista(){
	principio = nullptr;
	cantidad = 0;
}

template<class T>
inline lista<T>::~lista(){

}

template<class T>
inline bool lista<T>::estavacia(){
	return (principio == nullptr);
}

template<class T>
inline void lista<T>::ingresar(T* _a){

	Nodo<T>* a = new Nodo<T>(_a);
	Nodo<T>* aux = principio;

	if (estavacia()) {
		principio = a;
	}
	else {
		while (aux->getsiguiente()){
			aux = aux->getsiguiente();
		}
	    aux->setSiguente(a);
	}
	cantidad++;
}	

template<class T>
inline string lista<T>::tostring(){
	stringstream c;

	Nodo<T>* aux = principio;

	while (aux){
		c << "----Lista----" << endl << endl;
		c << aux->getelemnto()->tostring();
		aux = aux->getsiguiente();
	}
	return c.str();
}

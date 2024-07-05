#pragma once
#include<iostream>
#include<sstream>

using namespace std;

template <class T>

class Nodo {

private:
	T* elemnto;
	Nodo<T>* siguiente;

public:

	Nodo(T* _elemnto);

	T* getelemnto();

	Nodo<T>* getsiguiente();

	void setElemnto(T* _elemnto);

	void setSiguente(Nodo<T>* _siguiente);

};

template<class T>
inline Nodo<T>::Nodo(T* _elemnto){
	elemnto = _elemnto;
	siguiente = nullptr;
}

template<class T>
inline T* Nodo<T>::getelemnto(){
	return elemnto;
}

template<class T>
inline Nodo<T>* Nodo<T>::getsiguiente(){
	return siguiente;
}

template<class T>
inline void Nodo<T>::setElemnto(T* _elemnto){
	elemnto = _elemnto;
}

template<class T>
inline void Nodo<T>::setSiguente(Nodo<T>* _siguiente){
	siguiente = _siguiente;
}


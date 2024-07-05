#pragma once
#include"ObserverTribunalElecciones.h"

using namespace std;

//------------------Subject------------------
//----------------lo observado---------------
//------------creacion del TSE---------------

class TSE {
private:

	int numMesas;
	int valor1;//PLN
	int valor2;//PUSC
	int valor3;//PSD
	//aqui en el subject debe existir un contenedor de observer 
	Partido** vec;
	int cant;
	int tam;
public:

	TSE();
	virtual~TSE();
	void attach(Partido* a);//agregar algunos partidos que se suscriben 
	void setValores(int a, int b, int c);
	void notify(); //avisar a todos los observers para que se actualicen 

	//algunos otros metodos vitales que ayuden al proceso
	void conteoVotosXmesa();
	void infoMesa();
	void solicitudNuevaMesa();
};
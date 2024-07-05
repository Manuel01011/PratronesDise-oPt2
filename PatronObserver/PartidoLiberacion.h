#pragma once
#include"ObserverTribunalElecciones.h"

class PartidoLiberacion :public Partido {
private:
	string nombre;
	//otras cosas
public:
	PartidoLiberacion(string _nombre);
	virtual~PartidoLiberacion();
	virtual void upDate(int = 0, int = 0, int = 0);
	virtual string tostring();
	virtual void graficando();
};
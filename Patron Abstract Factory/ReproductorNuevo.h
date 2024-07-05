#pragma once
#include"Reproductor.h"

class ReproductorNuevo :public Reproductor {
public:
	ReproductorNuevo(string _codigo, string _nombre);
	virtual~ReproductorNuevo();
	virtual string tostring();
};
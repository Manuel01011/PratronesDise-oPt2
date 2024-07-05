#pragma once
#include"Reproductor.h"

class ReproductorViejo :public Reproductor {
public:
	ReproductorViejo(string _codigo, string _nombre);
	virtual~ReproductorViejo();
	virtual string tostring();
};
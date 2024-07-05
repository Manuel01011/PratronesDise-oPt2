#pragma once
#include"Grabador.h"

class GrabadorNuevo :public Grabador {
public:
	GrabadorNuevo(string _codigo,string _nombre);
	virtual~GrabadorNuevo();
	virtual string tostring();
};
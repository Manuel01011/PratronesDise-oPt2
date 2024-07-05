#pragma once
#include"Grabador.h"

class GrabadorViejo :public Grabador {
public:
	GrabadorViejo(string _codigo, string _nombre);
	virtual~GrabadorViejo();
	virtual string tostring();
};
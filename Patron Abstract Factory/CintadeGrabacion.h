#pragma once

#include"Medio.h"

class Cinta :public Medio {
public:
	Cinta(string _codigo, string _nombre);
	virtual~Cinta();
	virtual string tostring();
};
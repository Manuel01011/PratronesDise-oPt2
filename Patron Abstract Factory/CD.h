#pragma once
#include"Medio.h"

class CD :public Medio {
public:
	CD(string _codigo, string _nombre);
	virtual~CD();
	virtual string tostring();
};
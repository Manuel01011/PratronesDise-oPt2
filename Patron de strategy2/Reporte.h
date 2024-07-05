#pragma once
#include"Persona.h"

//herencia de estrategias

class Reporte {
public:
	virtual void encabezado() = 0;
	virtual void mostrar(Persona a) = 0; //lleva un formato en las clases derivadas 
};
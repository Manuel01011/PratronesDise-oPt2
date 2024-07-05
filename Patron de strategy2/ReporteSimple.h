#pragma once
#include"Reporte.h"

class ReporteSimple :public Reporte {
public:
	ReporteSimple();
	virtual~ReporteSimple();
	void encabezado();
	void mostrar(Persona a);
};
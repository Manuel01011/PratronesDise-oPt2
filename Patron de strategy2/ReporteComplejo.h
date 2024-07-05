#pragma once
#include"Reporte.h"

class ReporteComplejo :public Reporte {
public:
	ReporteComplejo();
	virtual~ReporteComplejo();
	void encabezado();
	void mostrar(Persona a);
};
#pragma once
#include"Reporte.h"
#include"Persona.h"

//contexto del problema 

class Compania {
private:
	Persona* vec; //vector de objeos automaticos 
	int cant;
	int tam;
public:
	Compania();
	virtual~Compania();
	void insertarPersona(Persona a);
	void listarReporte(Reporte* a); //reportar el tipo de reporte seleccionado 
};
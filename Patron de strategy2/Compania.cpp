#include "Compania.h"

Compania::Compania(){
	vec = new Persona[10];
	cant = 0;
	tam = 10;
}

Compania::~Compania(){
	delete[] vec;
}

void Compania::insertarPersona(Persona a){
	if (cant < tam) {
		vec[cant++] = a;
	}
}

void Compania::listarReporte(Reporte* a){
	a->encabezado();
	for (int i = 0; i < cant; i++){
		a->mostrar(vec[i]);
	}
	

}

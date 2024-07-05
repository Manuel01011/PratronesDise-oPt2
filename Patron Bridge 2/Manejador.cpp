#include "Manejador.h"

Manejador::Manejador(Puente* _puente, Contenedor* _conte){
	Implementacion = _puente;
	conte = _conte;
}

Manejador::Manejador(int tipo, Contenedor* _conte){
	if (tipo == 1) {
		Implementacion = new Implementacion1();
	}
	if (tipo == 2) {
		Implementacion = new Implementacion2();
	}
	if (tipo == 3) {
		Implementacion = new Implementacion3();
	}
	conte = _conte;
}

Manejador::~Manejador(){
	if (Implementacion != nullptr) {
		delete Implementacion;
	}
	if (conte != nullptr) {
		delete conte;
	}
}

void Manejador::mostrarTotales(){
	Implementacion->mostrarTotales(conte);
}

void Manejador::listar(){
	Implementacion->listaProductos(conte);
}

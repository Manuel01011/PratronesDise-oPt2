#include "FabricaNueva.h"
#include"Interfaz.h"

FabricaNueva::FabricaNueva(){
	grab = crearGrabador();
	med = crearMedio();
	repro = crearReproductor();
}

FabricaNueva::~FabricaNueva(){
	if (grab != nullptr) {
		delete grab;
	}
	if (med != nullptr) {
		delete med;
	}
	if (repro != nullptr) {
		delete repro;
	}
}

Grabador* FabricaNueva::crearGrabador(){
	//aqui puede existir una interfaz para las solicitudes del grabador
	return Interfaz::creandoGrabadorNuevo();
}

Medio* FabricaNueva::crearMedio(){
	//aqui puede existir una interfaz para las solicitudes del medio
	return Interfaz::creandoMedioCD();
}

Reproductor* FabricaNueva::crearReproductor(){
	//aqui puede existir una interfaz para las solicitudes del Reproductor
	return Interfaz::creandoReproductorNuevo();
}

string FabricaNueva::tostring(){
	stringstream c;

	c<<grab->tostring();
	c<<med->tostring();
	c<<repro->tostring();

	return c.str();
}

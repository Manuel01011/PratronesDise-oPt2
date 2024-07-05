#include "FabricaVieja.h"
#include"Interfaz.h"

FabricaVieja::FabricaVieja() {
	grab = crearGrabador();
	med = crearMedio();
	repro = crearReproductor();
}

FabricaVieja::~FabricaVieja() {
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

Grabador* FabricaVieja::crearGrabador() {
	//aqui puede existir una interfaz para las solicitudes del grabador
	return Interfaz::creandoGrabadorViejo();
}

Medio* FabricaVieja::crearMedio() {
	//aqui puede existir una interfaz para las solicitudes del medio
	return Interfaz::creandoMedioCinta();
}

Reproductor* FabricaVieja::crearReproductor() {
	//aqui puede existir una interfaz para las solicitudes del Reproductor
	return Interfaz::creandoReproductorViejo();
}

string FabricaVieja::tostring() {
	stringstream c;

	c << grab->tostring();
	c << med->tostring();
	c << repro->tostring();

	return c.str();
}

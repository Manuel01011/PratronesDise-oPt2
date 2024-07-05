#pragma once
#include"Fabrica.h"

class FabricaNueva:public FabricaEquipo {
public:
	FabricaNueva();
	virtual~FabricaNueva();
	virtual Grabador* crearGrabador();
	virtual Medio* crearMedio();
	virtual Reproductor* crearReproductor();
	virtual string tostring();
};
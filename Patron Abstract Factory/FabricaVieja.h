#pragma once
#include"Fabrica.h"

class FabricaVieja :public FabricaEquipo {
public:
	FabricaVieja();
	virtual~FabricaVieja();
	virtual Grabador* crearGrabador();
	virtual Medio* crearMedio();
	virtual Reproductor* crearReproductor();
	virtual string tostring();
};
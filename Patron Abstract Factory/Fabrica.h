#pragma once
#include"Grabador.h"
#include"GrabadorNuevo.h"
#include"GrabadorViejo.h"
#include"Medio.h"
#include"CD.h"
#include"CintadeGrabacion.h"
#include"Reproductor.h"
#include"ReproductorNuevo.h"
#include"ReproductorViejo.h"

class FabricaEquipo {//fabrica abstracta 
protected:
	Grabador* grab;
	Medio* med;
	Reproductor* repro;
public:
	FabricaEquipo();
	virtual~FabricaEquipo();
	virtual Grabador* crearGrabador()=0;
	virtual Medio* crearMedio() = 0;
	virtual Reproductor* crearReproductor() = 0;
	virtual string tostring() = 0;
};
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

class Interfaz {
private:
    static string codigo;
    static string nombre;
public:
	static Grabador* creandoGrabadorNuevo();
    static  Medio* creandoMedioCD();
    static Reproductor* creandoReproductorNuevo();

    static Grabador* creandoGrabadorViejo();
    static  Medio* creandoMedioCinta();
    static Reproductor* creandoReproductorViejo();

    static void mensajePeticion();
};
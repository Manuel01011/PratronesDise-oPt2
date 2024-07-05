#include "Implementacion3.h"

void Implementacion3::mostrarTotales(Contenedor* a){
	double totalG = 0;//total general
	double totalM = 0;
	double totalC = 0;
	double totalD = 0;
	int cantidad = 0;

	totalG = a->totalGeneral();
	totalM = a->totalMedicamentos();
	totalC = a->totalcomidad();
	totalD = a->totalDeportes();
	cantidad = a->getCantidad();
	cout << "El total general del valor de los produtos es de: " << totalG << " colones " << endl;
	cout << "El total gen3ral de medicamentos es de: " << totalM << " colones" << endl;
	cout << "El total de comidas es de: " << totalC << " colones" << endl;
	cout << "Total de deportes: " << totalD << " colones" << endl;
	cout << "La cantidad total de productos es de: " << cantidad << " unidades" << endl;
}

void Implementacion3::listaProductos(Contenedor* a){
	a->listaProductos3();
}

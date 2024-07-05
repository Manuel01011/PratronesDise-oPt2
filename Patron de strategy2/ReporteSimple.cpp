#include "ReporteSimple.h"

ReporteSimple::ReporteSimple(){

}

ReporteSimple::~ReporteSimple(){

}

void ReporteSimple::encabezado(){
	cout << "|--------------------------------------------------|" << endl;
	cout << "|------------------Reporte Simple------------------|" << endl;
	cout << "| Personas:                                        |" << endl;
	cout << "|--------------------------------------------------|" << endl;
	cout << "|       nombre         apellido         cedula     |" << endl;
	cout << "|--------------------------------------------------|" << endl;

}

void ReporteSimple::mostrar(Persona a){
	cout << a.tostring() << endl;
}

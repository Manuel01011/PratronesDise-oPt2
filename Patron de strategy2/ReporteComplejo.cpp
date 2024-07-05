#include "ReporteComplejo.h"

ReporteComplejo::ReporteComplejo() {

}

ReporteComplejo::~ReporteComplejo() {

}

void ReporteComplejo::encabezado() {
	cout << "|--------------------------------------------------|" << endl;
	cout << "|------------------Reporte Complejo------------------|" << endl;
	cout << "| Personas:                                        |" << endl;
	cout << "|--------------------------------------------------|" << endl;
	
	cout << "|--------------------------------------------------|" << endl;

}

void ReporteComplejo::mostrar(Persona a) {//mostrar tipo XML
	cout << "<Persona>   " << endl;
    cout << "<nombre>   "<< a.getNombre() << " </nombre>" << endl;
	cout << "<apellido>   " << a.getApellido() << " </apellido>" << endl;
	cout << "<cedula>   " << a.getCedula() << " </cedula>" << endl;
	cout << "</Persona>   " << endl;
	cout << endl << endl;
}
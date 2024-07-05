#include "VentasEmpresas.h"
VentasEmpresas* VentasEmpresas::ventasEmpresa = nullptr;

VentasEmpresas::VentasEmpresas() {
	this->CantidadUnidadesVendidad = 0;
	this->TotalVentas = 0;
	this->nombreEmpresa = "Singleton";
	this->CedulaJuridica = "12345";
}

VentasEmpresas::VentasEmpresas(double canVen, double TotalVen, string NombreEmpre, string CedulaJuri) {
	CantidadUnidadesVendidad = canVen;
	TotalVentas = TotalVen;
	nombreEmpresa = NombreEmpre;
	CedulaJuridica = CedulaJuri;
}

void VentasEmpresas::destruirEmpresa(){
	if (ventasEmpresa != nullptr) {
		delete ventasEmpresa;
	}
}

VentasEmpresas& VentasEmpresas::vEmprsa(){

	if (ventasEmpresa == nullptr) {
		ventasEmpresa = new VentasEmpresas();
		atexit(destruirEmpresa); //para destruir empresa
	}
	return *ventasEmpresa;
}

double VentasEmpresas::getCantidadVendida(){
	return CantidadUnidadesVendidad;
}

double VentasEmpresas::getTotalVentas()
{
	return TotalVentas;
}

void VentasEmpresas::setCantidadesVendidas(double can){
	CantidadUnidadesVendidad += can;
}

void VentasEmpresas::setTotalVentas(double total){
	TotalVentas += total;
}

string VentasEmpresas::tostring() const{
	stringstream c;

	c << "----------Datos de la empresa----------" << endl;
	c << "Nombre de la empresa: " << nombreEmpresa << endl;
	c << "Cedula juridica: " << CedulaJuridica << endl;
	c << "Cantidad de unidades vendidas: " << CantidadUnidadesVendidad << endl;
	c << "Total de ventas de la empresa: " << TotalVentas << endl;
	c << "----------------------------------------" << endl << endl;

	return c.str();
}

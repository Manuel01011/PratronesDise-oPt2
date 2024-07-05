#include "Vendedor.h"
#include"VentasEmpresas.h"

static int COSTOPORARTICULO = 300;//esto simula una conexion a la base de datos
//para saber la existencia de los productos 

Vendedor::Vendedor(string name, string lasname, string id) {
	nombre = name;
	apellido = lasname;
	cedula = id;
	unidadesVendidas = 0;
	TotalVentas = 0;
}

Vendedor::~Vendedor(){

}

void Vendedor::setUnidadesVendidas(double unidadesVen){
	unidadesVendidas += unidadesVen;
}

void Vendedor::setTotalVentas(double TotalVen){
	TotalVentas += TotalVen;
}

double Vendedor::getTotalVentas(){
	return TotalVentas;
}

double Vendedor::getUnidadesVentas(){
	return unidadesVendidas;
}

string Vendedor::tostring(){
	stringstream c;
	c << "Nombre: " << nombre << endl;
	c << "Apellido: "<<apellido << endl;
	c << "Cedula: " << cedula << endl;
	c << "Unidades vendidad: " << unidadesVendidas << endl;
	c << "Total de ventas: " << TotalVentas << endl<<endl;
	return c.str();
}

void Vendedor::realizaVenta(double elemntosvenidos){
	VentasEmpresas& VE = VentasEmpresas::vEmprsa();//vEmpresa()  ==> instance()
	double ventas = COSTOPORARTICULO * elemntosvenidos;
	this->setTotalVentas(ventas);
	this->setUnidadesVendidas(elemntosvenidos);

	//singleton
	VE.setCantidadesVendidas(elemntosvenidos);
	VE.setTotalVentas(ventas);
}

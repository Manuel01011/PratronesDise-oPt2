#pragma once
#include<iostream>
#include<sstream>
using namespace std;

//singleton

class VentasEmpresas { //singleton
private:
	double CantidadUnidadesVendidad;
	double TotalVentas;
	string nombreEmpresa;
	string CedulaJuridica;
	VentasEmpresas(); 
	VentasEmpresas(double, double,string,string);
	static VentasEmpresas* ventasEmpresa;//se declara la istancia unica
	static void destruirEmpresa();//funcion static que se aplica para eliminar el dinamico global creado

public:
	static VentasEmpresas& vEmprsa();//para acceder a la instacia
	double getCantidadVendida();
	double getTotalVentas();
	void setCantidadesVendidas(double can);
	void setTotalVentas(double total);
	string tostring()const;

};
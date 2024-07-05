#pragma once
#include<sstream>
#include<iostream>

using namespace std;

class Vendedor {
private:
	string nombre;
	string apellido;
	string cedula;
	double unidadesVendidas;
	double TotalVentas;

	public:
		Vendedor(string,string,string);

		virtual~Vendedor();

		void setUnidadesVendidas(double unidadesVen);

		void setTotalVentas(double TotalVen);

		double getTotalVentas();

		double getUnidadesVentas();

		string tostring();

		void realizaVenta(double); //metodo muy importante

};
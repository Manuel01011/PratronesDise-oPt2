#pragma once
#include"Producto.h"
#include<Windows.h>
using namespace std;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);//manipular la consola

class Contenedor {
private:
	Producto* vec[30];
	int cant;
	int tam;
public:
	Contenedor();
	virtual~Contenedor();
	int getCantidad();
	bool ingresarProducto(Producto* a);
	void totales();
	void listaProductos1();
	void listaProductos2();
	void listaProductos3();
	int cuentaCaracteres(char);
	double totalMedicamentos();
	double totalDeportes();
	double totalcomidad();
	double totalGeneral();
	void imprimeTexto(string, int);

};
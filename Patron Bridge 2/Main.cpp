#include"Manejador.h"

int main() {

	//hacer un menu

	Contenedor* conte = new Contenedor();

	//ingresar productos
	conte->ingresarProducto(new Producto("M101", 56.33));
	conte->ingresarProducto(new Producto("M234", 12.32));
	conte->ingresarProducto(new Producto("C654", 34.33));
	conte->ingresarProducto(new Producto("M401", 78.33));
	conte->ingresarProducto(new Producto("C345", 25.33));
	conte->ingresarProducto(new Producto("D567", 47.33));
	conte->ingresarProducto(new Producto("M103", 58.33));
	conte->ingresarProducto(new Producto("D911", 41.33));
	conte->ingresarProducto(new Producto("C732", 92.33));
	conte->ingresarProducto(new Producto("M056", 89.33));

	//creamos el puente 
	//primer constructor
	//Manejador* Bridge = new Manejador(new Implementacion1(), conte);

	//segundo constructor
	Manejador* bridge = new Manejador(1, conte);
	bridge->mostrarTotales();
	bridge->mostrarTotales();

	system("pause");
	return 0;
}
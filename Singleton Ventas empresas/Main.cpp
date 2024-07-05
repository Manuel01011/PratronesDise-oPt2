#include"Vendedor.h"
#include"VentasEmpresas.h"

int main() {

	cout<<"----Creando una empresa----"<<endl<<endl;
	VentasEmpresas& VE = VentasEmpresas::vEmprsa();

	cout << "----Creando vendedores----" << endl;
	Vendedor* vendedor1 = new Vendedor("Mario", "Salazar", "17893");
	Vendedor* vendedor2 = new Vendedor("Carlos", "Monge", "9032");
	Vendedor* vendedor3 = new Vendedor("Ana", "Ruiz", "17823");

	cout << vendedor1->tostring() << endl;
	cout << vendedor2->tostring() << endl;
	cout << vendedor3->tostring() << endl;

	cout << "----Realizar ventas con los vendedores----" << endl;
	vendedor1->realizaVenta(5);
	vendedor2->realizaVenta(13);
	vendedor3->realizaVenta(144);

	cout << endl << endl;
	cout << "----Datos de la empresa----" << endl;
	cout << VE.tostring() << endl;

	system("pause");
	return 0;
}
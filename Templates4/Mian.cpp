#include"Carro.h"
#include"ListaCarros.h"

int main() {

	Carro* car1 = new Carro("Nissan", "Negro");
	Carro* car2 = new Carro("Jeep", "Blanco");
	Carro* car3 = new Carro("Toyota", "Gris");
	Carro* car4 = new Carro("Hyndai", "Azul");

	ListaCarros* lis = new ListaCarros();

	lis->insertaCarro(car1);
	lis->insertaCarro(car2);
	lis->insertaCarro(car3);
	lis->insertaCarro(car4);

	
	cout<<lis->tostring() << endl;

	system("pause");
	return 0;
}
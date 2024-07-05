#include"FabricaNueva.h"
#include"FabricaVieja.h"

int main() {

	//variables comodines

	FabricaEquipo* FE = nullptr; //UP-CAST
	
	int op;
	do{
		system("cls");
		FE = nullptr;
		cout << "-------Abstrac Factory----------" << endl << endl;
		cout << "_____________Menu_______________" << endl;
		cout << "(1) Creacion de Equipo Viejo" << endl;
		cout << "(1) Creacion de Equipo Nuevo" << endl;
		cout << "(3) Salir" << endl;
		cout << "-------------------------------" << endl<<endl;
		cout << "Ingrese su opcion: ";
		cin >> op;

		system("pause");
		system("cls");

		switch (op){

		case 1: {
			cout << "Creacion de equipo viejo " << endl;
			FE = new FabricaVieja();

			break;
		}
		case 2: {
			cout << "Creacion de equipo nuevo " << endl;
			FE = new FabricaNueva();
			break;
		}
		case 3: {
			cout << "Muchas gracias por su visita" << endl;
			break;
		}
		default:
			break;
		}
		//fin del switch
		if (FE != NULL) {
			cout << endl;
			cout << FE->tostring() << endl<<endl;
			system("pause");
		}

	} while (op != 3);


	delete FE;
	system("pause");
	return 0;
}
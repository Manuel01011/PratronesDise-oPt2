#include"Compania.h"
#include"ReporteComplejo.h"
#include"ReporteSimple.h"

int main() {

	char seguir;
	int valor;
	cout << "Creacion de una Compania " << endl;
	Compania Co;

	cout << "Ingreso de personas a la compania " << endl;
	Co.insertarPersona(*new Persona("18293", "Gabriel", "Campos"));
	Co.insertarPersona(*new Persona("839433", "Jose", "Salas"));
	Co.insertarPersona(*new Persona("88761", "Dilan", "Alpizar"));
	Co.insertarPersona(*new Persona("12232", "Ana", "Mora"));

	do {
		system("cls");
		cout << "-------REPORTE--------------" << endl;
		cout << "   [1] Reposte Simple       " << endl;
		cout << "   [2] Reporte Formateado   " << endl;
		cout << "----------------------------" << endl;
		cout << "Digite su opscion -> "; cin >> valor;
		system("pause");
		system("cls");

		switch (valor) {
		case 1: {
			Co.listarReporte(new ReporteSimple());
			break;
		}
		case 2: {
			Co.listarReporte(new ReporteComplejo());
			break;

		}
		default:
			cout << "Opcion incorrecta. Intetalo de nuevo " << endl;
			break;
		}
		cout << "Deseas seguir imprimiendo reportes? s -> si     n -> no" << endl;
		cin >> seguir;
	} while (seguir == 's');

	system("pause");
	system("cls");
	return 0;
}
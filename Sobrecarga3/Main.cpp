#include"Pareja.h"
//sobrecarga de operadores 

int main() {

	cout << "-------Trabajando con sobrecarga de operadores------" << endl<<endl;

	//son referencias no punteros 
	Pareja A(50, 70);
	Pareja B(100, 25);
	Pareja C;
	Pareja D;
	Pareja E(200, 300);
	Pareja F(200, 300);

	cout << "----Imprimiendo esos objetos----" << endl<<endl;
	cout << "A: " << A<<endl;
	cout << "B: " << B<<endl;
	cout << "C: " << C<<endl;
	cout << "D: " << D<<endl<<endl;

	cout << "----Sumando perejas----" << endl<<endl;
	C = A + B;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl<<endl;

	cout << "----Restando perejas----" << endl << endl;
	C = A - B;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl << endl;

	cout << "----Multiplicando perejas----" << endl << endl;
	C = A * B;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl << endl;

	cout << "----Dividiendo perejas----" << endl << endl;
	C = A / B;
	cout << "A: " << A << endl;
	cout << "B: " << B << endl;
	cout << "C: " << C << endl << endl;

	cout << "----Verificar igualadad de dos objetos----" << endl<<endl;
	cout << "E: " << E << endl;
	cout << "F: " << F << endl;
	cout << endl;
	if (E == F) {
		cout << "Las parejas E y F SON iguales " << endl;
	}
	else {
		cout << "Las parejas E y F No son iguales " << endl;
	}
	if (B == A) {
		cout << "Las parejas B y A SON iguales " << endl;
	}else {
		cout << "Las parejas B y A No son iguales " << endl;
	}

	system("pause");
	system("cls");
	return 0;
}
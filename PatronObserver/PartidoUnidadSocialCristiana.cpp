#include "PartidoUnidadSocialCristiana.h"

PartidoUnidadSocialCristiana::PartidoUnidadSocialCristiana(string _nombre) {
	nombre = _nombre;
}

PartidoUnidadSocialCristiana::~PartidoUnidadSocialCristiana() {

}

//-------------parte del update-------------

void PartidoUnidadSocialCristiana::upDate(int a, int b, int c) { //a -> PLN   b -> PUSC   c -> PSD

	valorPLN += a;
	valorPUSC += b;
	valorPSD += c;
}

string PartidoUnidadSocialCristiana::tostring() {
	//no interesa en el partido unidadsocialCristiana
	return "";
}

void PartidoUnidadSocialCristiana::graficando() {
	cout << "-------------Grafica-------------" << endl;
	cout << "--------------PUSC---------------" << endl << endl;
	cout << "1- PLN = " << endl;
	for (int i = 0; i < valorPLN / 100; i++) {
		cout << "*";
	}
	cout << endl;

	cout << "2- PUSC = " << endl;
	for (int i = 0; i < valorPUSC / 100; i++) {
		cout << "*";
	}
	cout << endl;

	cout << "3- PSD = " << endl;
	for (int i = 0; i < valorPSD / 100; i++) {
		cout << "*";
	}
	cout << endl;
	cout << "---------------------------------" << endl << endl;

}

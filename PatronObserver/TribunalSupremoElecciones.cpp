#include "TribunalSupremoElecciones.h"

TSE::TSE(){
	valor1 = 0;
	valor2 = 0;
	valor3 = 0;
	vec = new Partido * [5];
	cant = 0;
	tam = 5;
	numMesas = 0;
	for (int i = 0; i < tam; i++){
		vec[i] = nullptr;
	}
}

TSE::~TSE(){

}

void TSE::attach(Partido* a){
	if (cant < tam) {
		vec[cant++] = a;
	}
}

void TSE::setValores(int a, int b, int c){
	valor1 = a;
	valor2 = b;
	valor3 = c;
	notify();
}

void TSE::notify(){
	for (int i = 0; i < cant; i++){
		vec[i]->upDate(valor1, valor2, valor3);
	}
}

void TSE::conteoVotosXmesa(){
	int val1, val2, val3;
	//cuantro intentos donde se hace el conteo de votos
	//conteo de votos con un valor aleatorio
	val1 = 1 + rand() / (101 - 1);
	val2 = 1 + rand() / (101 - 1);
	val3 = 1 + rand() / (101 - 1);
	numMesas = 1 + rand() % (10001 - 1);
	this->setValores(val1, val2, val3);//sacar simbolicamente le conteo de votos 
}

void TSE::infoMesa() {
	cout << "-----------Informacion de la mesa--------------" << endl;
	cout << "Numero de mesa: " << numMesas << endl;
	cout << "Votos PLN: " << valor1 << endl;
	cout << "Votos PUSC: " << valor2 << endl;
	cout << "Votos PSD: " << valor3 << endl;

}

void TSE::solicitudNuevaMesa(){
	this->conteoVotosXmesa();
}

#include "ObserverTribunalElecciones.h"

Partido::Partido(){
	cout << "Costruyndo partido politico" << endl;
	valorPLN = 0;
	valorPSD = 0;
	valorPUSC = 0;

}

Partido::~Partido(){

}

int Partido::getValorPLN(){
	return valorPLN;
}

int Partido::getValorPUSC(){
	return valorPUSC;
}

int Partido::getValorPSD(){
	return valorPSD;
}

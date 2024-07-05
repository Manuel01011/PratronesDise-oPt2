#include "PartidoLiberacion.h"

PartidoLiberacion::PartidoLiberacion(string _nombre){
	nombre = _nombre;
}

PartidoLiberacion::~PartidoLiberacion(){

}

//-------------parte del update-------------

void PartidoLiberacion::upDate(int a, int b, int c){ //a -> PLN   b -> PUSC   c -> PSD

	valorPLN += a;
	valorPUSC += b;
	valorPSD += c;
}

string PartidoLiberacion::tostring(){
	stringstream c;

	c << "--------------Partido Liberacion Nacional---------------" << endl;
	c << "Votos a favor de PLN: " << valorPLN << endl;
	c << "Votos a favor de PUSC: " << valorPUSC << endl;
	c << "Votos a favor PSD: " << valorPSD << endl;

	return c.str();
}

void PartidoLiberacion::graficando(){
	//no interesa en el partido liberacion nacional 
}

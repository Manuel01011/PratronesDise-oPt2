#include "ListaCarros.h"

ListaCarros::ListaCarros(){
	lisCarros = new lista<Carro>();
}

ListaCarros::~ListaCarros(){
}

void ListaCarros::insertaCarro(Carro* car){
	lisCarros->insertar(car);
}

string ListaCarros::tostring(){
	
	return lisCarros->tostring();
}

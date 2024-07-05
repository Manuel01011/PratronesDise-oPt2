#pragma once
#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Producto {
private:
	string codigo;
	double valor;

public:
	Producto(string _codigo, double _valor);
	virtual~Producto();
	double getValor();
	string getCodigo();
	string tostring() const;
	char getPrimerCaracterDelCodigo();
};
#pragma once
#include<iostream>
using namespace std;

class Pareja {

private:

	int a;
	int b;

public:

	Pareja();

	Pareja(const int _a, const int _b);

	//costructor copia{ siempre se debe trabajar con referencias
	//en el costruyo un nuevo objeto con los datos del objeto que me llega por parametro
	Pareja(const Pareja& obj);

	Pareja& operator +(const Pareja& p2);
	//Tipo de dato a retornar + siempre operator + el signo a operar + el objeto a operar
	Pareja& operator - (const Pareja& p2);
	Pareja& operator * (const Pareja& p2);
	Pareja& operator / (const Pareja& p2);
	bool operator >= (const Pareja& p2);

	Pareja& operator = (const Pareja& p2);
	bool operator == (const Pareja& p2);


	//existen los operadores no miembros: 
	friend ostream& operator << (ostream& salida, const Pareja& p1);
	friend istream& operator >> (istream& entreda, Pareja& p1);
};


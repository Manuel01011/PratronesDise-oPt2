#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Carro {

private:
	string marca;
	string color;
public:
	Carro(string _marca, string _color);
	
	virtual~Carro();

	string tostring();

};
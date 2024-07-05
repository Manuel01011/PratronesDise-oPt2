#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Medio {
protected:
	string codigo;
	string nombre;
public:
	Medio();
	virtual~Medio();
	virtual string tostring() = 0;
};
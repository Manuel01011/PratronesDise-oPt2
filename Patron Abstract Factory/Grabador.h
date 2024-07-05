#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Grabador {//clase abtracta ya que hay muchos tipos de grabadores 
protected:
	string codigo;
	string nombre;
public:
	Grabador();
	virtual~Grabador();
	virtual string tostring() = 0; //M.V.P
};
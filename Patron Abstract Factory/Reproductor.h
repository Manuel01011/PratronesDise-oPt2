#pragma once
#include<iostream>
#include<sstream>

using namespace std;

class Reproductor {//clase abtracta ya que hay muchos tipos de grabadores 
protected:
	string codigo;
	string nombre;
public:
	Reproductor();
	virtual~Reproductor();
	virtual string tostring() = 0; //M.V.P
};
#pragma once
#include<iostream>
#include<sstream>
#include<windows.h>
using namespace std;

//comenzamos con los observers

class Partido{ //clase abtracata
protected:
	int valorPLN;
	int valorPUSC;
	int valorPSD;//progreso social democratico 
public:
	Partido();
	virtual~Partido();
	virtual void upDate(int = 0,int = 0,int = 0) = 0;//todo observer necesita tener un upDate
	virtual string tostring() = 0; //M.V.P
	virtual void graficando() = 0;//M.V.P
	virtual int getValorPLN();
	virtual int getValorPUSC();
	virtual int getValorPSD();

};
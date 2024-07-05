#include "Pareja.h"

Pareja::Pareja():a(0),b(0) {

}

Pareja::Pareja(const int _a, const int _b){
	this->a = _a;
	this->b = _b;
}

Pareja::Pareja(const Pareja& obj){
	//con los atributos del objeto que nos llega solo accedemos de forma violenta 
	this->a = obj.a;
	this->b = obj.b;
}

Pareja& Pareja::operator+(const Pareja& p2){

	// A = A + B  no es necesariamente lo que se quiere 
	//C = A + B   Es lo que se quiere 
	this->a += p2.a;
	this->b += p2.b;

	return *this;  //ref = *punt             punt* = &ref
}

Pareja& Pareja::operator-(const Pareja& p2){
	this->a = a - p2.a;
	this->b = b - p2.b;

	return *this;
}

Pareja& Pareja::operator*(const Pareja& p2){

	this->a = a * p2.a;
	this->b = b * p2.b;

	return *this;
}

Pareja& Pareja::operator/(const Pareja& p2){

	this->a = a / p2.a;
	this->b = b / p2.b;

	return *this;
}

Pareja& Pareja::operator=(const Pareja& p2){
	//operador de asignacion 
	//este operador copia profundamente la informacion de 
	//un objeto existente sobre otro objeto tambien existente 
	// p1 = p2;

	if (this != &p2) {//esto quiere decir que los dos objetos son diferentes 
		if (p2.a != 0) this->a += p2.a;
		if (p2.b != 0) this->b += p2.b;
	}
	return *this;
}

bool Pareja::operator==(const Pareja& p2){
	//sobrecarga del operador de igualdad (==)
	return (this->a == p2.a && this->b == p2.b);
}

ostream& operator<<(ostream& salida, const Pareja& p1){
	//este operador de flujo de salida, se sobrecarga para que se imprima
	// la informacion de un objeto con ulgun formato, sin recurrir al tostring()
	//cout<<P3;
	salida << "El objeto pareja es: (" << p1.a << ", " << p1.b << ")";

	return salida;
}

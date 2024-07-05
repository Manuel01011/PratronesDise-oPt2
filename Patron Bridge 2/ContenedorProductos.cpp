#include"ContenedorProductos.h"

Contenedor::Contenedor() {
	cant = 0;
	tam = 30;
	for (int i = 0; i < tam; i++){
		vec[i] = nullptr;
	}

}


Contenedor::~Contenedor() {
	for (int i = 0; i < tam; i++){
		delete vec[i];
	}
}
int Contenedor::getCantidad() {
	return cant;
}


bool Contenedor::ingresarProducto(Producto* a) {
	if (cant < tam) {
		vec[cant++] = a;
		return true;
	}
	else {
		return false;
	}
}


void Contenedor::totales() {
	double total = 0;
	for (int i = 0; i < cant; i++){
		total += vec[i]->getValor();
	}
}
void Contenedor::listaProductos1() {
	for (int i = 0; i < cant; i++){
		cout << vec[i]->tostring() << endl;
	}
}


//ver los productos de colores
void Contenedor::listaProductos2() {
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == 'C') {
			this->imprimeTexto(vec[i]->tostring(), 4);
		}
		if (vec[i]->getPrimerCaracterDelCodigo() == 'D') {
			this->imprimeTexto(vec[i]->tostring(), 5);
		}
		if (vec[i]->getPrimerCaracterDelCodigo() == 'M') {
			this->imprimeTexto(vec[i]->tostring(), 6);
		}
	}
}


void Contenedor::listaProductos3() {

	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == 'C') {
			this->imprimeTexto(vec[i]->tostring(), 4);
		}
	}
	for (int i = 0; i < cant; i++){
		if (vec[i]->getPrimerCaracterDelCodigo() == 'D') {
			this->imprimeTexto(vec[i]->tostring(), 5);
		}
	}
	for (int i = 0; i < cant; i++){
		if (vec[i]->getPrimerCaracterDelCodigo() == 'M') {
			this->imprimeTexto(vec[i]->tostring(), 6);
		}
	}
}


int Contenedor::cuentaCaracteres(char letra) {
	int cuenta = 0;
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == letra) {
			cuenta++;
		}
	}
	return cuenta;
}


double Contenedor::totalMedicamentos() {
	double totalMedicamentos = 0;
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == 'M') {
			totalMedicamentos += vec[i]->getValor();
			totalMedicamentos++;
		}
	}
	return totalMedicamentos;
}
double Contenedor::totalDeportes() {
	double totalDeportes = 0;
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == 'D') {
			totalDeportes += vec[i]->getValor();
			totalDeportes++;
		}
	}
	return totalDeportes;
}


double Contenedor::totalcomidad() {
	double totalComida = 0;
	for (int i = 0; i < cant; i++) {
		if (vec[i]->getPrimerCaracterDelCodigo() == 'C') {
			totalComida += vec[i]->getValor();
			totalComida++;
		}
	}
	return totalComida;
}


double Contenedor::totalGeneral() {
	double totalGneral = 0;
	for (int i = 0; i < cant; i++) {
		totalGneral += vec[i]->getValor();
		totalGneral++;
	}
	return totalGneral;
}


void Contenedor::imprimeTexto(string tex1, int y1) {
	//tecnicismo para el color
	int len = 0;
	int y = y1;
	string text(tex1);
	len = text.length();
	for (int x = 0; x < len; x++){
		SetConsoleTextAttribute(console, y);
		cout << text[x];
		if (y > 254) 
			y = 240;
			Sleep(100);
	}
	SetConsoleTextAttribute(console, 15);
}

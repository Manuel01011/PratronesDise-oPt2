#include"Estudiantes.h"
#include"ListaEstudiantes.h"

int main() {

	estudiante* estudiant1 = new estudiante("Manuel", 18, "Ingenieria en sistemas");
	estudiante* estudiant2 = new estudiante("Carlos", 19 ,"	Matematico");
	estudiante* estudiant3 = new estudiante("Ana", 18, "Ingenieria forestal");

	//recordar que las sobrecargar no se trabajan con punteros
	estudiante estudiant4("Maria", 22, "Administracion");
	estudiante estudiant5("Juan", 25, "Contaduria");

	ListaEstudinates* lista1 = new ListaEstudinates();

	lista1->Ingresar(estudiant1);
	lista1->Ingresar(estudiant2);
	lista1->Ingresar(estudiant3);

	//cout << lista1->tostring() << endl;
	lista1->operator()("ver");
	cout << endl;

	cout << "La suma de las edades del estudiantes 4 y 5 es: ";
	cout<<estudiant4 + estudiant5; cout << endl << endl;

   cout<<estudiant4.tostring();
   cout << estudiant5.tostring();


   system("pause");
	return 0;
}
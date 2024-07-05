#include"TribunalSupremoElecciones.h"
#include"PartidoLiberacion.h"
#include"PartidoProgresoSocialDemocratico.h"
#include"PartidoUnidadSocialCristiana.h"

int main() {

	int x = 0;
	cout << "-------------Participacion Popular--------------" << endl;
	cout << "-------------Tribunal Supremo de elecciones-----------" << endl<<endl;

	cout << "Creacionn de partidos politicos" << endl<<endl;
	Partido* observado1 = new PartidoLiberacion("Partido Liberacion"); //san jose
	Partido* observado2 = new PartidoLiberacion("Partido Liberacion"); //Limon
	Partido* observado3 = new PartidoUnidadSocialCristiana("Partido Unidad social");
	//creando otros visores de esos partidos 

	cout << "Creando el subjec o sea el TSE" << endl;
	TSE objetoTSE;//objeto automatico

	cout << "ingresando los suscriptores al Tribunal Supremo de Elecciones" << endl;
	objetoTSE.attach(observado1);
	objetoTSE.attach(observado2);
	objetoTSE.attach(observado3);
	system("pause");

	//parte de la simulacion exsistira un conteo de 100 meses
	while (x<100){
		system("cls");
		cout << "--------------------TSE----------------" << endl;
		cout << "---------------------------------------" << endl;
		objetoTSE.solicitudNuevaMesa();
		cout << endl;
		cout << "---------------Informacion del TSE---------------" << endl;
		objetoTSE.infoMesa();
		cout << endl;
		cout << "---------------Informacion de los partidos politicos-----------" << endl;
		cout << endl;
		cout << observado1->tostring();
		observado3->graficando();
		x++;
		Sleep(4000);
	}
	//Fin de la simulacion 

	system("pause");
	return 0;
}
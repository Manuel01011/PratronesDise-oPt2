#pragma once
#include"ObserverTribunalElecciones.h"

class PartidoUnidadSocialCristiana :public Partido {
private:
	string nombre;
	//otras cosas
public:
	PartidoUnidadSocialCristiana(string _nombre);
	virtual~PartidoUnidadSocialCristiana();
	virtual void upDate(int = 0, int = 0, int = 0);
	virtual string tostring();
	virtual void graficando();
};
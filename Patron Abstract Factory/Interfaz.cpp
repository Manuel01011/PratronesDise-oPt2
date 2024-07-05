#include "Interfaz.h"
//inicializar las variables static para que no nos de problemas
string Interfaz::codigo = "";
string Interfaz::nombre = "";

Grabador* Interfaz::creandoGrabadorNuevo(){
    cout << "\tIngrese valores para un Grabador Nuevo " << endl;
    mensajePeticion();
    return new GrabadorNuevo(codigo,nombre);
}

Medio* Interfaz::creandoMedioCD(){
    cout << "\tIngrese valores para el medio llamado CD " << endl;
    mensajePeticion();
    return new CD(codigo,nombre);
}

Reproductor* Interfaz::creandoReproductorNuevo(){
    cout << "\tIngrese valores para el reproductor nuevo " << endl;
    mensajePeticion();
    return new ReproductorNuevo(codigo, nombre);
}

Grabador* Interfaz::creandoGrabadorViejo(){
    cout << "\tIngrese valores para un Grabador viejo " << endl;
    mensajePeticion();
    return new GrabadorViejo(codigo, nombre);
}

Medio* Interfaz::creandoMedioCinta(){
    cout << "\tIngrese valores para un medio viejo llamado cinta" << endl;
    mensajePeticion();
    return new Cinta(codigo, nombre);
    return nullptr;
}

Reproductor* Interfaz::creandoReproductorViejo(){
    cout << "\tIngrese valores para el reproductor viejo " << endl;
    mensajePeticion();
    return new ReproductorViejo(codigo, nombre);
}

void Interfaz::mensajePeticion(){
    string cod,nom;

    cout << "Ingrese el codigo" << endl;
    cin >> cod;
    codigo = cod; //asi se cargan los atributos static de la interfaz 

    cout << "Ingrese el nombre" << endl;
    cin >> nom;
    nombre = nom;//asi se cargan los atributos static de la interfaz 
}


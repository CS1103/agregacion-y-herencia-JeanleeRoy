//
// Created by jeanlee on 3/05/19.
//

#include "Volumen.h"

Volumen::Volumen(string name, int num):nombre{name},numVol{num} {}

string Volumen::get_nombre() {
    return nombre;
}

Volumen::~Volumen() {

}

Libro::Libro(string nombre, int num, int vol):Volumen(nombre,vol), numLibros{num} {}

void Libro::mostrar() {
    cout<<"Volumen #"<<numVol<<" Libro #"<<numLibros<<" titulo: "<<nombre<<endl;
}

Revista::Revista(string nombre, int num, int vol):Volumen(nombre,vol),numRevistas{num} {}

void Revista::mostrar() {
    cout<<"Volumen #"<<numVol<<" Revista #"<<numRevistas<<" titulo: "<<nombre<<endl;
}

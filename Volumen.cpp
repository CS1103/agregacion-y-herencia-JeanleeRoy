//
// Created by jeanlee on 3/05/19.
//

#include "Volumen.h"

Volumen::Volumen(string name):nombre{name} {
    this->numVol++;
}

string Volumen::get_nombre() {
    return nombre;
}

void Volumen::mostar() {
    cout<<"Volumen #"<<numVol+1<<" ";
}

Volumen::~Volumen() {

}

Libro::Libro(string nombre):Volumen{nombre} {
    this->numLibros++;
}

void Libro::mostrar() {
    Volumen::mostar();
    cout<<"Libro #"<<numLibros<<" titulo: "<<get_nombre();
}

Revista::Revista(string nombre) : Volumen(nombre) {
    this->numRevistas++;
}

void Revista::mostrar() {
    Volumen::mostar();
    cout<<"Revista #"<<numRevistas<<" titulo: "<<get_nombre();
}

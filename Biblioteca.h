//
// Created by jeanlee on 3/05/19.
//

#ifndef AGREGACION_Y_HERENCIA_JEANLEEROY_BIBLIOTECA_H
#define AGREGACION_Y_HERENCIA_JEANLEEROY_BIBLIOTECA_H


#include "Volumen.h"

class Biblioteca {
    int maxLibros;
    int maxRevistas;
    vector<Volumen* > volumenes;
public:
    Biblioteca(int lib, int rev);
    void mostrarBiblioteca();
    void incluir(Volumen& entrada);
};


#endif //AGREGACION_Y_HERENCIA_JEANLEEROY_BIBLIOTECA_H

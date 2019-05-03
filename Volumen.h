//
// Created by jeanlee on 3/05/19.
//

#ifndef AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H
#define AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Volumen {
    string nombre;
    int numVol;
public:
    explicit Volumen(string name);
    string get_nombre();
    void mostar();
    ~Volumen();
};

class Libro : public Volumen{
    int numLibros;
public:
    explicit Libro(string nombre);
    void mostrar();
};

class Revista : public Volumen{
    int numRevistas;
public:
    explicit Revista(string nombre);
    void mostrar();
};


#endif //AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H

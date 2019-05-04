//
// Created by jeanlee on 3/05/19.
//

#ifndef AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H
#define AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H

#include <string>
#include <vector>
#include <iostream>
using namespace std;


//Clase Padre

class Volumen {
protected:
    string nombre;
    int numVol;
public:
    Volumen(string name, int num);
    string get_nombre();
    virtual void mostrar() = 0;
    ~Volumen();
};


// Clases hijas

class Libro : public Volumen{
    int numLibros;
public:
    Libro(string nombre, int num, int vol);
    void mostrar() override;
};

class Revista : public Volumen{
    int numRevistas;
public:
    Revista(string nombre, int num, int vol);
    void mostrar() override;
};


#endif //AGREGACION_Y_HERENCIA_JEANLEEROY_VOLUMEN_H

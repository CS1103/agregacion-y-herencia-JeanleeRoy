#include "Biblioteca.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#ifndef CATCH_CONFIG_MAIN

int main() {
    Biblioteca biblio(1,1);
    Volumen* v = new Libro("EL mundo",1,1);
    Volumen* r = new Revista("Hildebrant en sus trece",1,2);
    biblio.incluir(v);
    biblio.incluir(r);
    biblio.mostrarBiblioteca();
}

#endif
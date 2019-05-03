#include "Biblioteca.h"

int main() {
    Biblioteca biblio(1,1);
    Volumen* v = new Libro("Hola");
    Volumen* r = new Libro("Hola2");
    biblio.incluir(*v);
    biblio.incluir(*r);
    biblio.mostrarBiblioteca();
}
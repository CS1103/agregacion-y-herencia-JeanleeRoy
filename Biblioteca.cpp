//
// Created by jeanlee on 3/05/19.
//

#include "Biblioteca.h"

Biblioteca::Biblioteca(int lib, int rev):maxLibros{lib}, maxRevistas{rev} {}

void Biblioteca::mostrarBiblioteca() {
    int cont = 0;
    while (cont < volumenes.size()){
        volumenes[cont++]->mostrar();
    }
}

void Biblioteca::incluir(Volumen* entrada) {
    bool flag = true;
    int cont = 0;
    while (cont < volumenes.size()){
        if (entrada->get_nombre()==volumenes[cont++]->get_nombre())
            flag = false;
    }
    if (flag)
        volumenes.push_back(entrada);
}

int Biblioteca::nVolumenes() {
    return volumenes.size();
}

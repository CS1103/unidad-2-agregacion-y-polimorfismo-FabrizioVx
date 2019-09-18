//
// Created by Fabrizio Vásquez on 9/18/19.
//

#include <iostream>
#include "Biblioteca.h"
using namespace std;

int main(){
    auto *libro1 = new Libro("The Big Nine", 1, 3);
    auto *libro2 = new Libro("The Theory of Everthing",4,8);
    auto *revista = new Revista("Morat XD", 3, 10);
    auto biblioteca = new Biblioteca;
    biblioteca->incluir(libro1);
    biblioteca->incluir(libro2);
    biblioteca->mostrarBiblioteca();



    return 0;
}
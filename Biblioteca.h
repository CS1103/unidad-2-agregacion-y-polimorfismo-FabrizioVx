//
// Created by Fabrizio Vásquez on 9/18/19.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H

#include "iostream"
#include "cstddef"
#include "vector"
using namespace std;

class Volumen{
protected:                                                      //Se declara como protegido para que los atributos puedan ser usadas por sus clases hijas
    string nombre;
    int numVol = 0;
public:
    Volumen(string nombre, int numVol):nombre(nombre),numVol(numVol){}      //Const
    virtual void mostrar(){                                     //Clase virtual ya que se redefinirá esta funcion en sus clases hijas: Libro , Revista
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Numero de Volumen: "<<numVol<<endl;
    }

};



class Biblioteca {
private:
    vector<Volumen *> MaxLibros;                    //vector de Libros q
    vector<Volumen *> MaxRevistas;                  //vector de revistas
public:
    Biblioteca()= default;

    void incluir(Volumen *item) {
        MaxLibros.push_back(item);
    }

    void mostrarBiblioteca() {
        for (auto fabrizio : MaxLibros) {
            fabrizio->mostrar();
            cout << "\n";
        }

        for (auto fabrizio1 : MaxRevistas) {
            fabrizio1->mostrar();
            cout << "\n";
        }
    }
};

class Libro : public Volumen{
private:
    int numLibros = 0;
public:
    Libro(string nombre, int numVol ,int numLibros): Volumen(nombre,numVol){       // Constructor  que hereda nombre y numVol de la clase Volumen
        this->numLibros=numLibros;                                                  //Pasando el atributo numLubros (ini)
    }

    void mostrar() override {                                                       //Muestra en pantalla los datos tanto del libro Volumen, Nombre y numero de Volumnes asi como el NumLbros
        Volumen::mostrar();
        cout << "Numero de Libro: "<< numLibros<<endl;
    }
};


class Revista : public Volumen{
private:
    int numRevistas = 0;
public:
    Revista(string nombre, int numVol, int numRevistas): Volumen(nombre,numVol){    // Constructor  que hereda nombre y numVol de la clase Volumen
        this->numRevistas=numRevistas;                                              // Pasando el atributo numRevistas (ini)
    }

    void mostrar() override{                                                    //Muestra en pantalla los datos tanto del libro Volumen, Nombre y numero de Volumnes asi como el NumRevistas
        Volumen::mostrar();
        cout<<"Numero de Revista: "<<numRevistas<<endl;
    }

};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H

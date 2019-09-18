//
// Created by Fabrizio Vásquez on 9/18/19.
//

#ifndef UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H
#define UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H

class Volumen{
protected:
    string nombre = NULL;
    int numVol = 0;
public:
    Volumen(string nombre, int numVol):nombre(nombre),numVol(numVol){}
    virtual void mostrar(){
        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Numero de Volumen: "<<numVol<<endl;
    }

};


class Biblioteca{

};

class Libro : public Volumen{
private:
    int numLibros = 0;
public:
    Libro(string nombre, int numVol ,int numLibros): Volumen(nombre,numVol){
        this->numLibros=numLibros;
    }

    void mostrar() override {
        Volumen::mostrar();
        cout << "Numero de Libro: "<< numLibros<<endl;
    }
};


#endif //UNIDAD_2_AGREGACION_Y_POLIMORFISMO_FABRIZIOVX_BIBLIOTECA_H

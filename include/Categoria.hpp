#ifndef CATEGORIA_H
#define CATEGORIA_H

#include <iostream>
using namespace std;

class Categoria
{
    protected:
        string nombre;
        float descuento;
    public: 
        Categoria();
        void setNombre(string _nombre);
        void setDescuento(float _descuento);
        string getNombre();
        float getDescuento();
};

#endif
#ifndef TARJETA_H
#define TARJETA_H
#include <iostream>
using namespace std;

class Tarjeta
{
    private:
        string nombre;
        float saldo;
        int edad;
        Categoria categoria;
    public:
    Tarjeta (string _nombre, float _saldo, int _edad, Categoria _categoria);
    string getNombre();
    float getSaldo();
    int getEdad();
    Categoria getCategoria();
    void reacargar(float monto);
    void solicitarmonto ();
    void pagar();
};

#endif
#include "Tarjeta.hpp"
#include <iostream>
using namespace std;

Tarjeta::Tarjeta (string _nombre, float _saldo, int _edad, Categoria _categoria)
{
    nombre = _nombre;
    saldo = _saldo;
    edad = _edad;
    categoria = _categoria;
}
string Tarjeta::getNombre()
{
    return nombre;
}
float Tarjeta::getSaldo()
{
    return saldo;
}
int Tarjeta::getEdad()
{
    return edad;
}

Categoria Tarjeta::getCategoria()
{
    return categoria;
}
void Tarjeta::reacargar(float monto)
{
    saldo = saldo + monto;
    
}
void Tarjeta::solicitarmonto ()
{
    float monto;
    cout<< "¿Cuanto quieres recargar? " << endl; 
    cin>> monto; 
    saldo = saldo + monto; 
}
void Tarjeta::pagar()
{
    saldo= saldo - (10 -(10*categoria.getDescuento()));
    
}
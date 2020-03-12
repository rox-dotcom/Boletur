#include "Categoria.hpp"
#include <iostream>
using namespace std;

Categoria::Categoria()
{
    nombre = "categoria general";
    descuento = 0.2;
}
void Categoria::setNombre(string _nombre)
{
    nombre = _nombre;
}
void Categoria::setDescuento(float _descuento)
{
    descuento = _descuento;
}
string Categoria::getNombre()
{
    return nombre;
}
float Categoria::getDescuento()
{
    return descuento;
}
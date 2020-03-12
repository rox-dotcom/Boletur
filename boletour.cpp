#include <iostream>
using namespace std;


int main()
{
    CategoriaTerceraEdad categoria_1 = CategoriaTerceraEdad();
    CategoriaEstudiante categoria_2 = CategoriaEstudiante();
    // categoria_1.setNombre("2.0");

    Tarjeta mi_tarjeta = Tarjeta ("Rox", 200.0, 18, categoria_2);
    cout << "Mi nombre es " << mi_tarjeta.getNombre() << endl;
    cout << " Mi edad es  " << mi_tarjeta.getEdad() << endl;
    cout << "Mi saldo es de " << mi_tarjeta.getSaldo() << endl;

    cout << "Mi categoria es "<< mi_tarjeta.getCategoria().getNombre() << endl;
    mi_tarjeta.reacargar(200);
    cout<< mi_tarjeta.getSaldo();
    cout<< endl;
    mi_tarjeta.solicitarmonto();
    cout<< mi_tarjeta.getSaldo();
    cout<< endl;
    mi_tarjeta.pagar();
    cout<< "Te voy a restar $10 del transporte"<< endl;
    cout<< mi_tarjeta.getSaldo(); 
    return 0;
}
#include "Rectangulo.h"
#include <iostream>

Rectangulo::Rectangulo() : FiguraGeometrica()
{
    base = 0;
    altura = 0;
}

Rectangulo::Rectangulo(string col, int base, int altura) : FiguraGeometrica(col)
{
    this->base = base;
    this->altura = altura;
}

    //sobreescritura 
void Rectangulo::calcularArea()
{
    double area = base*altura;
    cout<<"El area de un rectangulo es: "<<area<<endl;
}
void Rectangulo::calcularPerimetro()
{
    double perimetro = 2*(base+altura);
    cout<<"El perimetro del rectangulo es: "<<perimetro<<endl;
}
string Rectangulo::mostrarColor()
{
    cout<<"Color del rectangulo: "+color+"\n";
}
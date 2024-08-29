#include "Triangulo.h"
#include <iostream>

Triangulo::Triangulo() : FiguraGeometrica()
{
    base = 0;
    altura = 0;
    lado_a = 0;
    lado_b = 0;
    lado_c = 0;
}

Triangulo::Triangulo(string col, int base, int alt, int lado_a, int lado_b, int lado_c) : FiguraGeometrica(col)
{
    this->base = base;
    altura = alt;
    this->lado_a = lado_a;
    this->lado_b = lado_b;
    this->lado_c = lado_c;
}

    //sobreescritura 
void Triangulo::calcularArea()
{
    double area = (base*altura)/2.0;
    cout<<"El area de un triangulo es: "<<area<<endl;
}
void Triangulo::calcularPerimetro()
{
    double perimetro = lado_a + lado_b + lado_c;
    cout<<"El perimetro del triangulo es: "<<perimetro<<endl;
}
string Triangulo::mostrarColor()
{
    cout<<"Color del triangulo: "+color+"\n";
}
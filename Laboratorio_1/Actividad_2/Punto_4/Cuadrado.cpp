#include "Cuadrado.h"
#include <iostream>

Cuadrado::Cuadrado() : FiguraGeometrica()
{
    lado=0;
}

Cuadrado::Cuadrado(string col, int lado) : FiguraGeometrica(col)
{
    this->lado = lado;
}

    //sobreescritura 
void Cuadrado::calcularArea()
{
    double area = lado*lado;
    cout<<"El area de un cuadrado es: "<<area<<endl;
}
void Cuadrado::calcularPerimetro()
{
    double perimetro = 4*lado;
    cout<<"El perimetro del cuadrado es: "<<perimetro<<endl;
}
string Cuadrado::mostrarColor()
{
    cout<<"Color del cuadrado: "+color+"\n";
}
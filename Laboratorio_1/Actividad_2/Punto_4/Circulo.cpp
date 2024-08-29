#include "Circulo.h"
#include <iostream>

/*Constructores del circulo*/
Circulo::Circulo() : FiguraGeometrica()
{
    radio = 0;
}
Circulo::Circulo(string color, double radio) : FiguraGeometrica(color)
{
    this->radio = radio;
}
    //dos metodos del padre que voy a sobreescribir (polimorfismo)
void Circulo::calcularArea()
{
    double area = 3.1416 * radio*radio;
    cout<<"El area del circulo que tiene radio: "<<radio<<" es: "<<area<<endl;
}
void Circulo::calcularPerimetro()
{
    double perimetro = 2 * 3.1416 * radio;
    cout<<"El perimetro del circulo que tiene radio: "<<radio<<" es"<<perimetro<<endl;
}
string Circulo::mostrarColor()
{
    cout<<"Color del circulo: "+color+"\n";
}
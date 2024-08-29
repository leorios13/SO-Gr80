#include "FiguraGeometrica.h"
#include <iostream>
    
/*Constructores de la clase*/
FiguraGeometrica::FiguraGeometrica()
{
    color = "";
}
FiguraGeometrica::FiguraGeometrica(string color)
{
    this->color = color;
}

    //métodos que vamos a sobreescribir (polimorfismo) en las clases hijas
void FiguraGeometrica::calcularArea()
{
    cout<<"El calculo del area de la figura geometrica"<<endl;
}

void FiguraGeometrica::calcularPerimetro()
{
    cout<<"El calculo del perimetro de la figura geometrica"<<endl;
}

string FiguraGeometrica::mostrarColor()
{
    return "color: "+color+"\n";
}
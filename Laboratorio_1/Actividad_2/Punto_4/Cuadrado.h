#ifndef CUADRADO_H
#define CUADRADO_H

#include "FiguraGeometrica.h"

class Cuadrado : public FiguraGeometrica
{
    private:
    int lado;

    public:
    Cuadrado();
    Cuadrado(string, int);
    //sobreescritura 
    void calcularArea();
    void calcularPerimetro();
    string mostrarColor();
};
#else
class Cuadrado;
#endif
#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "FiguraGeometrica.h"

class Rectangulo : public FiguraGeometrica
{
    private:
    int base, altura;

    public:
    Rectangulo();
    Rectangulo(string, int, int);
    //sobreescritura 
    void calcularArea();
    void calcularPerimetro();
    string mostrarColor();
};
#else
class Rectangulo;
#endif
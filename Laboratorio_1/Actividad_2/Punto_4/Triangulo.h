#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica
{
    private:
    int base, altura, lado_a, lado_b, lado_c;

    public:
    Triangulo();
    Triangulo(string, int, int, int, int, int);
    //sobreescritura 
    void calcularArea();
    void calcularPerimetro();
    string mostrarColor();
};
#else
class Triangulo;
#endif
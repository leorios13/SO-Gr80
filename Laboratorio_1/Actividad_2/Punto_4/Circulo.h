#ifndef CIRCULO_H
#define CIRCULO_H
#include "FiguraGeometrica.h"
class Circulo : public FiguraGeometrica
{
    private:
    double radio;
    
    public:
    Circulo();
    Circulo(string, double);
    //dos metodos del padre que voy a sobreescribir (polimorfismo)
    void calcularArea();
    void calcularPerimetro();
    string mostrarColor();
};
#else
class Circulo;
#endif
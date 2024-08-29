#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>
using namespace std;

class FiguraGeometrica
{
    protected:
    string color;
    
    public:
    FiguraGeometrica();
    FiguraGeometrica(string);
    //métodos que vamos a sobreescribir (polimorfismo) en las clases hijas
    virtual void calcularArea();
    virtual void calcularPerimetro();
    virtual string mostrarColor();
};
#else
class FiguraGeometrica;
#endif
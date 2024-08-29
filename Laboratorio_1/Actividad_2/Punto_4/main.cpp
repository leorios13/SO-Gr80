#include <iostream>
#include "FiguraGeometrica.h"
#include "Circulo.h"
#include "Triangulo.h"
#include "Cuadrado.h"
#include "Rectangulo.h"

using namespace std;

string leer(string mensaje)
{
    string aux;
    cout<<mensaje;
    getline(cin, aux);
    return aux;
}

int main()
{
    string ingresar_figura;
    ingresar_figura = leer("Escriba la figura (triangulo, cuadrado, circulo, rectangulo): ");
    FiguraGeometrica *figura;
    
    if (ingresar_figura == "triangulo")
    {
        int base, altura, lado_a, lado_b, lado_c;
        string color;
        base = stoi(leer("base: "));
        altura = stoi(leer("altura: "));
        lado_a = stoi(leer("lado a: "));
        lado_b = stoi(leer("lado b: "));
        lado_c = stoi(leer("lado c: "));
        color = leer("color: ");
        figura = new Triangulo(color, base, altura, lado_a, lado_b, lado_c);
        figura->calcularArea();
        figura->calcularPerimetro();
        figura->mostrarColor();
    }

    if (ingresar_figura == "cuadrado")
    {
        int lado;
        string color;
        lado = stoi(leer("lado: "));
        color = leer("color: ");
        figura = new Cuadrado(color, lado);
        figura->calcularArea();
        figura->calcularPerimetro();
        figura->mostrarColor();
    }

    if (ingresar_figura == "circulo")
    {
        int radio;
        string color;
        radio = stoi(leer("radio: "));
        color = leer("color: ");
        figura = new Circulo(color, radio);
        figura->calcularArea();
        figura->calcularPerimetro();
        figura->mostrarColor();
    }

    if (ingresar_figura == "rectangulo")
    {
        int base, altura;
        string color;
        base = stoi(leer("base: "));
        altura = stoi(leer("altura: "));
        color = leer("color: ");
        figura = new Rectangulo(color, base, altura);
        figura->calcularArea();
        figura->calcularPerimetro();
        figura->mostrarColor();
    }

    return 0;
}
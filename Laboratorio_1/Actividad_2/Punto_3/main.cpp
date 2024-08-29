#include <iostream>
using namespace std;

#define MAX_NUMEROS 100  // Definimos el tamaño máximo del arreglo

// Función para determinar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Función para verificar si un número dado es primo
void verificarNumeroPrimo() {
    int numero;
    cout << "Ingresa un número para verificar si es primo: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << numero << " es un número primo.\n";
    } else {
        cout << numero << " no es un número primo.\n";
    }
}

// Función para identificar números primos en una lista usando un arreglo
void identificarPrimosEnLista() {
    int cantidad;
    int numeros[MAX_NUMEROS];  // Arreglo para almacenar los números

    cout << "\n¿Cuántos números quieres ingresar en la lista?: ";
    cin >> cantidad;

    if (cantidad > MAX_NUMEROS) {
        cout << "Error: La cantidad excede el tamaño máximo del arreglo.\n";
        return;
    }

    // Llenar el arreglo con los números ingresados
    cout << "Ingresa los " << cantidad << " números:\n";
    for (int i = 0; i < cantidad; i++) {
        cin >> numeros[i];
    }

    // Identificar y mostrar los números primos
    cout << "Números primos en la lista:\n";
    for (int i = 0; i < cantidad; i++) {
        if (esPrimo(numeros[i])) {
            cout << numeros[i] << " ";
        }
    }
    cout << "\n";
}

// Función para mostrar los números primos dentro de un rango
void mostrarPrimosEnRango() {
    int inicio, fin;
    cout << "\nIngresa el rango de números (inicio y fin) para buscar primos:\n";
    cout << "Inicio: ";
    cin >> inicio;
    cout << "Fin: ";
    cin >> fin;

    cout << "Números primos en el rango [" << inicio << ", " << fin << "]:\n";
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }
    cout << "\n";
}

int main() {
    // Primera tarea: Verificar si un número es primo
    verificarNumeroPrimo();

    // Segunda tarea: Identificar números primos en una lista usando un arreglo
    identificarPrimosEnLista();

    // Tercera tarea: Mostrar números primos en un rango
    mostrarPrimosEnRango();

    return 0;
}
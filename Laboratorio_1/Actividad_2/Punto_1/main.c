#include <stdio.h>

//FUNCIÓN AÑO BISIESTO

int Bisiesto(int anio) {
    if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0)) {
        return 1; // Es bisiesto
    } else {
        return 0; // No es bisiesto
    }
}

int main() {
    int anio;
    printf("Introduce un año: ");
    scanf("%d", &anio);

    if (Bisiesto(anio)) {
        printf("El año %d es bisiesto.\n", anio);
    } else {
        printf("El año %d no es bisiesto.\n", anio);
    }

    return 0;
}
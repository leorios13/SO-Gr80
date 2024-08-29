//POTENCIA DE UN NÚMERO EN FUNCIÓN RECURSIVA
int potencia(int num, int exponente) {
    if (exponente == 0) {
        return 1; //Todo número elevado a 0 es igual a 1
    } else {
        return num * potencia(num, exponente - 1); // Recursividad
    }
}

int main() {
    int num, exponente;

    printf("Introduce el número base: ");
    scanf("%d", &num);

    printf("Introduce el exponente: ");
    scanf("%d", &exponente);

    int resultado = potencia(num, exponente);

    printf("%d elevado a la potencia %d es: %d\n", num, exponente, resultado);

    return 0;
}
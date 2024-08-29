//FUNCIÓN SERIE FIBONACCI

void imprimirFibonacci(int n) {
    int a = 0, b = 1, siguiente;

    printf("Serie de Fibonacci:\n");

    for (int i = 1; i <= n; i++) {
        printf("%d ", a);  // Imprime el número actual
        siguiente = a + b; // Calcula el siguiente número en la serie
        a = b;             // Actualiza el valor de 'a'
        b = siguiente;     // Actualiza el valor de 'b'
    }
    printf("\n");
}

int main() {
    int n;

    printf("Introduce el número de términos de la serie Fibonacci a imprimir: ");
    scanf("%d", &n);

    imprimirFibonacci(n);

    return 0;
}

//FUNCIÓN LETRA MINÚSCULA
void verificarMinuscula(char c) {
    if (islower(c)) {
        printf("La letra '%c' es minúscula.\n", c);
    } else {
        printf("La letra '%c' no es minúscula.\n", c);
    }
}

int main() {
    char letra;

    printf("Introduce una letra: ");
    scanf("%c", &letra);

    verificarMinuscula(letra);

    return 0;
}

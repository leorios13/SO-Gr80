//FUNCIÓN LETRA MAYÚSCULA
void verificarMayuscula(char c) {
    if (isupper(c)) {
        printf("La letra '%c' es mayúscula.\n", c);
    } else {
        printf("La letra '%c' no es mayúscula.\n", c);
    }
}

int main() {
    char letra;

    printf("Introduce una letra: ");
    scanf("%c", &letra);

    verificarMayuscula(letra);

    return 0;
}

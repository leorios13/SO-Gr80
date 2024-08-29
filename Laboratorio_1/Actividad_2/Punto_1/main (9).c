//FUNCIÓN OCTAL, DECIMAL Y HEXADECIMAL DE NÚMEROS DEL 1 AL 10

int main() {
    printf("Número en Decimal\tNúmero en Octal\tNúmero en Hexadecimal\n");
    printf("---------------------------------------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d\t\t\t%o\t\t\t%x\n", i, i, i);
    }

    return 0;
}

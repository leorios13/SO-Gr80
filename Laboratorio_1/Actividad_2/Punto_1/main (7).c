//FUNCIÓN PARA HALLAR EL MAYOR DE TRES NÚMEROS
int mayorDeTres(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    }if (num2 > num1 && num2 > num3){
        return num2;
    }else {
        return num3;
    }
}

int main(){
    int num1, num2, num3;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &num3);

    printf("El número mayor es: %d\n", mayorDeTres(num1, num2, num3));
    return 0;
}

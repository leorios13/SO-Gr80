//FUNCIÓN DE CONVERSIÓN IMPLÍCITO Y EXPLÍCITO

int main() {
    //Tipado explícito, se declara cada tipo de variable
    int numeroEntero = 5;
    float numeroFlotante = 2.5;

    // Conversión implícita: el compilador convierte automáticamente 'numeroEntero' a float
    float resultadoImplicito = numeroEntero + numeroFlotante;
    printf("Resultado de la conversión implícita (int + float): %f\n", resultadoImplicito);

    // Conversión explícita: el programador convierte un float a int con el casting
    int resultadoExplicito = (int)numeroFlotante + numeroEntero; 
    printf("Resultado de la conversión explícita (float a int): %d\n", resultadoExplicito);

    return 0;
}

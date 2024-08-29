#include <stdio.h>

//PROGRAMA PARA RECIBIR Y PROCESAR CALIFICACIONES DE UN CURSO CON ESTRUCTURA

#define MAX_ESTUDIANTES 50

// Definición de la estructura para almacenar los datos de un estudiante
struct Estudiante {
    char nombre[50];
    float calificacion;
};

// Función para ingresar las calificaciones de los estudiantes
void ingresarCalificaciones(struct Estudiante estudiantes[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingresa el nombre del estudiante %d: ", i + 1);
        scanf("%s", estudiantes[i].nombre);
        printf("Ingresa la calificación de %s: ", estudiantes[i].nombre);
        scanf("%f", &estudiantes[i].calificacion);
    }
}

// Función para calcular el promedio de calificaciones
float calcularPromedio(struct Estudiante estudiantes[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) {
        suma += estudiantes[i].calificacion;
    }
    return suma / n;
}

// Función para mostrar las calificaciones de los estudiantes
void mostrarCalificaciones(struct Estudiante estudiantes[], int n) {
    printf("\nCalificaciones de los estudiantes:\n");
    for (int i = 0; i < n; i++) {
        printf("Estudiante: %s - Calificación: %.2f\n", estudiantes[i].nombre, estudiantes[i].calificacion);
    }
}

int main() {
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes;

    printf("Ingresa el número de estudiantes en el curso: ");
    scanf("%d", &numEstudiantes);

    if (numEstudiantes > 0 && numEstudiantes <= MAX_ESTUDIANTES) {
        ingresarCalificaciones(estudiantes, numEstudiantes);
        mostrarCalificaciones(estudiantes, numEstudiantes);

        float promedio = calcularPromedio(estudiantes, numEstudiantes);
        printf("\nEl promedio de las calificaciones es: %.2f\n", promedio);
    } else {
        printf("Número de estudiantes no válido.\n");
    }

    return 0;
}
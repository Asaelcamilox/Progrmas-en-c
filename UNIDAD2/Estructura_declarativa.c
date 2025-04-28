#include<stdio.h>

typedef struct {//firma de la estrcutura
    char nombre[50];
    int edad;
    float promedio;
} Estudiante;

int main(){
    Estudiante estudiante1 = {"Maria Lopez", 22, 9.3};
    printf("nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.1f\n", estudiante1.promedio);
    return 0;
}
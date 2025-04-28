#include<stdio.h>

 struct Estudiante {
    char nombre [50];
    int edad;
    float promedio;
};
int main(){
    struct Estudiante estudiante1= {"Asael Camilo", 19, 8.5};

    printf("nombre: %s\n", estudiante1.nombre);
    printf("Edad: %d\n", estudiante1.edad);
    printf("Promedio: %.1f\n", estudiante1.promedio);

    return 0;
}
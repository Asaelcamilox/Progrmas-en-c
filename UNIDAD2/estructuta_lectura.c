#include<stdio.h>

struct Usuario{
    char nombre[50];
    int edad;
    char correo [50];

};

int main(){
    struct Usuario usuario1;

    printf("Ingrese su nombre\n");
    scanf("%s", usuario1.nombre);
    printf("Ingrese su edad\n");
    scanf("%s", usuario1.edad);
    printf("Ingrese su correo\n");
    scanf("%s", usuario1.correo);

    printf("\nDatos del usuario:\n");
    printf("Nombre: %s\n", usuario1.nombre);
    printf("Edad", usuario1.edad);
    printf("correo: %s\n", usuario1.correo);

    return 0;

}
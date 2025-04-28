#include<stdio.h>
struct Direccion{
    char calle[50];
    int num;
};

struct Persona {
    char nombre [50];
    struct Direccion domilicio;
};

int main(){
    struct Persona persona1 = {"Carlos Ramirez", {"Av.Reforma", 206}};
    printf("nombre: %s\n", persona1.nombre);
     printf("Domicilio: %s #%d\n", persona1.domilicio.calle, persona1.domilicio.num);
    return 0;

}
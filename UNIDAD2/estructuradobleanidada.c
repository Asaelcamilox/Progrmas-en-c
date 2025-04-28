#include<stdio.h>
struct Coordenadas{
    int x;
    int y;
};
struct Direccion{
    char calle[50];
    int numero;
    struct Coordenadas lugar;
};
struct Estudiante{
    char nombre[50];
    struct Direccion domicilio;
};

 int main(){
    int size;
    printf("Ingrese la cantidad de estructuras: \n");
    scanf("%d", &size);

    struct Estudiante alumno1[size];
    for (int i = 0; i < size; i++) {
        printf("Ingrese su nombre:");
        scanf("%s", alumno1[i].nombre);

        printf("Ingrese su calle:");
        scanf("%s", alumno1[i].domicilio.calle);

        printf("Ingrese su numero: ");
        scanf("%d", &alumno1[i].domicilio.numero);

        printf("Ingrese su coordenada x: ");
        scanf("%d", &alumno1[i].domicilio.lugar.x);

        printf("Ingrese su coordenada y: ");
        scanf("%d", &alumno1[i].domicilio.lugar.y);

    }

    printf("\n--- Datos ingresados ---\n");

    for (int i = 0; i < size; i++){
        printf("\nEstudiante [%d]:\n\n", i);
        printf("nombre: %s\n", alumno1[i].nombre);
        printf("Direccion: %s #%d\n", alumno1[i].domicilio.calle, alumno1[i].domicilio.numero);
        printf("Las coordenadas x son: %d", alumno1[i].domicilio.lugar.x);
        printf("\nLas coordenadas y son: %d\n", alumno1[i].domicilio.lugar.y);
    }
}
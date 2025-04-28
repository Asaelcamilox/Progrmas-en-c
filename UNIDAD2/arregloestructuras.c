#include <stdio.h>

struct Persona {
    char nombre[50];
    int edad;
    char correo[50];
    char telefono[50];
    int grupo;
    float promedio;
    char comidafav[50];
    char videojuegofav[50];
};

int main() {
    int size;

    printf("Ingrese la cantidad de estructuras: \n");
    scanf("%d", &size);

    struct Persona persona[size];

    for (int i = 0; i < size; i++) {
        printf("Ingrese su nombre: ");
        scanf(" %s", persona[i].nombre);  

        printf("Ingrese su edad: ");
        scanf("%d", &persona[i].edad);

        printf("Ingrese su correo: ");
        scanf(" %s", persona[i].correo);

        printf("Ingrese su promedio: ");
        scanf("%f", &persona[i].promedio);

        printf("Ingrese su telefono: ");
        scanf(" %s", persona[i].telefono);

        printf("Ingrese su comida favorita: ");
        scanf(" %s", persona[i].comidafav);

        printf("Ingrese su juego favorito: ");
        scanf(" %s", persona[i].videojuegofav);

        printf("Ingrese su grupo: ");
        scanf("%d", &persona[i].grupo);
    }

    printf("\n--- Datos ingresados ---\n");

    for (int i = 0; i < size; i++) {
        printf("\nPersona [%d]:\n\n", i);
        printf("Nombre: %s\n", persona[i].nombre);
        printf("Edad: %d\n", persona[i].edad);
        printf("Correo: %s\n", persona[i].correo);
        printf("Promedio: %.2f\n", persona[i].promedio);
        printf("Telefono: %s\n", persona[i].telefono);
        printf("Comida favorita: %s\n", persona[i].comidafav);
        printf("Juego favorito: %s\n", persona[i].videojuegofav);
        printf("Grupo: %d\n", persona[i].grupo);
    }

    return 0;
}

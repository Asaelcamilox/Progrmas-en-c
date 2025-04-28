#include <stdio.h>

struct Direccion{
    char calle[50];
    int numero;
};

struct Persona{
    char nombre[50];
    struct Direccion domicilio;
};

int main(){
    int n;

    printf("ingresar el numero de personas: ");
    scanf("%d", &n);
    getchar();

    struct Persona personas[n];
    for(int i = 0; i < n; i++){
        printf("\nIngrese los datos de la persona %d:\n", i + 1);

        printf("nombre: ");
        scanf("%s", personas[i].nombre);

        printf("calle: ");
        scanf("%s", personas[i].domicilio.calle);

        printf("numero: ");
        scanf("%d", &personas[i].domicilio.numero);
        getchar();
    }

    printf("\n%--20s | %--20s | %--10s\n", "nombre", "direccion", "numero");
    printf("---------------------------------------------------------------\n");

    for(int i = 0; i < n; i++){
        printf("%--20s | %--20s | %--10d\n",
                personas[i].nombre,
                personas[i].domicilio.calle,
                personas[i].domicilio.numero);
                
    }
    return 0;

}
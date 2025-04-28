#include<stdio.h>

struct Vehiculo{
    int llantas;
    char color[50];
    int caballosfuerza;
    int kilometraje;
};

union Camion{
    int asientos;
    int puertas;
    struct Vehiculo vehiculo;
};

union Moto{
    struct Vehiculo vehiculo;
    int cc;
};
int main(){
    union Camion camion;
    camion.vehiculo = (struct Vehiculo){4,"azul",45,123000};
    camion.asientos = 4;
    camion.puertas = 6;

    union Moto moto;
    moto.vehiculo = (struct Vehiculo){2,"negra",123,123211};
    moto.cc=1231;

    printf("\nSe imprimen valores camion\n");
    printf("asientos: %d\n", camion.asientos);
    printf("puertas: %d\n", camion.puertas);
    printf("llantas: %d\n", camion.vehiculo.llantas);
    printf("color: %s\n",camion.vehiculo.color);
    printf("cabalos de fuerza: %d\n",camion.vehiculo.caballosfuerza);
    printf("kilometraje: %d\n",camion.vehiculo.kilometraje);

    printf("\nSe imprimen valores moto\n");
    printf("llantas: %d\n", moto.vehiculo.llantas);
    printf("color: %s\n",moto.vehiculo.color);
    printf("cabalos de fuerza: %d\n",moto.vehiculo.caballosfuerza);
    printf("kilometraje: %d\n",moto.vehiculo.kilometraje);
    printf("cc: %d\n", moto.cc);
}
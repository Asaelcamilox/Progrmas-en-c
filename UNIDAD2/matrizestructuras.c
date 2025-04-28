#include <stdio.h>

#define Filas 3
#define columnas 3  

struct Videojuego{
    char nombre[50];
    int anio;
};

int main(){
    struct Videojuego matriz[Filas][columnas];
    printf("Ingrese los valores para la matriz :\n");

    for (int i = 0; i < Filas; i++){
        for(int j = 0; j< columnas; j++){
        printf("dame el nombre del juego: ");
        scanf(" %49[^\n]", matriz[i][j].nombre);
        printf("dame el anio de salida del juego: ");
        scanf("%d", &matriz[i][j].anio);
        }
    }

    printf("recorriendo la matriz: \n");
    for(int i=0; i<Filas; i++){
        for(int j = 0; j< columnas; j++){
            printf("%-22s%d ", matriz[i][j].nombre, matriz[i][j].anio);
            printf(" | "); 
        }
        printf("\n");
    }
    return 0;
}
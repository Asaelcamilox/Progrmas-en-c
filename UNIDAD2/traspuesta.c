#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            }
        }
    }
 void imprimirMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    printf("Matriz ingresada:\n");
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d ", matriz[i][j]);
            }
             printf("\n");
        }  
    }

void transpuestaMatriz( int filas, int columnas, int matriz[filas][columnas], int transpuesta[columnas][filas]){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }
}

int main(){
    int filas, columnas;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    int matriz_a[filas][columnas];
    int matriz_transpuesta[columnas][filas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz A", filas, columnas, matriz_a);

    transpuestaMatriz(filas, columnas, matriz_a, matriz_transpuesta);
    imprimirMatriz("traspuesta", filas, columnas, matriz_transpuesta);
}
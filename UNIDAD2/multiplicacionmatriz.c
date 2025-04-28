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

void multiplicacionMatriz( int filas, int columnas, int matriza[filas][columnas], int matrizb[columnas][filas], int multiplicacion[columnas][filas]){
    for(int i = 0; i < filas; i++){
        for (int j = 0; j < columnas; j++) {
            multiplicacion[i][j] = 0;
            for(int k = 0; k<columnas; k++){
                multiplicacion[i][j]  = multiplicacion[i][j]  + (matriza[i][k] * matrizb[k][j]);
            }
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
    int matriz_b[filas][columnas];
    int multiplicacion[filas][columnas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", filas, columnas, matriz_b);

    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz B", filas, columnas, matriz_b);

    multiplicacionMatriz(filas, columnas, matriz_a, matriz_b, multiplicacion);
    imprimirMatriz("multiplicacion", filas, columnas, multiplicacion);
}
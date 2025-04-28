#include <stdio.h>
#define FILAS 2
#define COLUMNAS 2

// Función para llenar la matriz
void llenarMatriz(char *nombre, int matriz[FILAS][COLUMNAS]) {
    printf("Llenando %s:\n", nombre);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(char *nombre, int matriz[FILAS][COLUMNAS]) {
    printf("%s:\n", nombre);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para llenar el vector (de tamaño 2)
void llenarVector(int vector[COLUMNAS]) {
    printf("Llenando vector:\n");
    for (int i = 0; i < COLUMNAS; i++) {
        printf("Ingrese valor para [%d]: ", i);
        scanf("%d", &vector[i]);
    }
}

// Función para multiplicar matriz por vector
void multiplicarMatrizPorVector(int matriz[FILAS][COLUMNAS], int vector[COLUMNAS], int resultado[FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        resultado[i] = 0;
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[i] += matriz[i][j] * vector[j];
        }
    }
}

// Función para imprimir el vector resultado
void imprimirVectorResultado(int vector[FILAS]) {
    printf("Resultado (matriz *  vector):\n");
    for (int i = 0; i < FILAS; i++) {
        printf("%4d\n", vector[i]);
    }
}

int main() {
    int matriz[FILAS][COLUMNAS];
    int vector[COLUMNAS];
    int resultado[FILAS];

    llenarMatriz("Matriz A", matriz);
    imprimirMatriz("Matriz A", matriz);

    llenarVector(vector);

    multiplicarMatrizPorVector(matriz, vector, resultado);

    imprimirVectorResultado(resultado);

    return 0;
}

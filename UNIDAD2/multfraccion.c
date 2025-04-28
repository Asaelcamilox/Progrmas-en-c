#include <stdio.h>

typedef struct {
    int num;  // numerador
    int den;  // denominador
} Fraccion;

void llenarMatriz(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el numerador para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].num);
            printf("Ingrese el denominador para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j].den);
            if (matriz[i][j].den == 0) {
                printf("El denominador no puede ser 0. Se asignará 1 por defecto.\n");
                matriz[i][j].den = 1;
            }
        }
    }
}

void imprimirMatriz(char *nombre, int filas, int columnas, Fraccion matriz[filas][columnas]) {
    printf("\nNombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("%4d/%d ", matriz[i][j].num, matriz[i][j].den);
        }
        printf("\n");
    }
}

Fraccion multiplicarFracciones(Fraccion a, Fraccion b) {
    Fraccion resultado;
    resultado.num = a.num * b.num;
    resultado.den = a.den * b.den;
    return resultado;
}

Fraccion sumarFracciones(Fraccion a, Fraccion b) {
    Fraccion resultado;
    resultado.num = a.num * b.den + b.num * a.den;
    resultado.den = a.den * b.den;
    return resultado;
}

void multiplicacionMatriz(int filas, int columnas, Fraccion A[filas][columnas], Fraccion B[columnas][filas], Fraccion C[filas][filas]) {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < filas; j++) {
            C[i][j].num = 0;
            C[i][j].den = 1;
            for (int k = 0; k < columnas; k++) {
                Fraccion mult = multiplicarFracciones(A[i][k], B[k][j]);
                C[i][j] = sumarFracciones(C[i][j], mult);
            }
        }
    }
}

int main() {
    int filas, columnas;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas);

    Fraccion matriz_a[filas][columnas];
    Fraccion matriz_b[columnas][filas];
    Fraccion multiplicacion[filas][filas];

    llenarMatriz("Matriz A", filas, columnas, matriz_a);
    llenarMatriz("Matriz B", columnas, filas, matriz_b);

    imprimirMatriz("Matriz A", filas, columnas, matriz_a);
    imprimirMatriz("Matriz B", columnas, filas, matriz_b);

    multiplicacionMatriz(filas, columnas, matriz_a, matriz_b, multiplicacion);
    imprimirMatriz("Multiplicacion", filas, filas, multiplicacion);

    return 0;
}

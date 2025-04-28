#include <stdio.h>

typedef struct {
    int num;  // numerador
    int den;  // denominador
} Fraccion;

void llenarMatriz5(char *nombre, int filas5, int columnas5, Fraccion matriz[filas5][columnas5]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas5; i++) {
        for (int j = 0; j < columnas5; j++) {
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

void imprimirMatriz5(char *nombre, int filas5, int columnas5, Fraccion matriz[filas5][columnas5]) {
    printf("\nNombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas5; i++) {
        for (int j = 0; j < columnas5; j++) {
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

void multiplicacionMatriz(int filas5, int columnas5, Fraccion A[filas5][columnas5], Fraccion B[columnas5][filas5], Fraccion C[filas5][filas5]) {
    for (int i = 0; i < filas5; i++) {
        for (int j = 0; j < filas5; j++) {
            C[i][j].num = 0;
            C[i][j].den = 1;
            for (int k = 0; k < columnas5; k++) {
                Fraccion mult = multiplicarFracciones(A[i][k], B[k][j]);
                C[i][j] = sumarFracciones(C[i][j], mult);
            }
        }
    }
}

int main() {
    int filas5, columnas5;
    printf("Ingrese el numero de filas: ");
    scanf("%d", &filas5);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &columnas5);

    Fraccion matriz_a[filas5][columnas5];
    Fraccion matriz_b[columnas5][filas5];
    Fraccion multiplicacion[filas5][filas5];

    llenarMatriz5("Matriz A", filas5, columnas5, matriz_a);
    llenarMatriz5("Matriz B", columnas5, filas5, matriz_b);

    imprimirMatriz5("Matriz A", filas5, columnas5, matriz_a);
    imprimirMatriz5("Matriz B", columnas5, filas5, matriz_b);

    multiplicacionMatriz(filas5, columnas5, matriz_a, matriz_b, multiplicacion);
    imprimirMatriz5("Multiplicacion", filas5, filas5, multiplicacion);

    return 0;
}
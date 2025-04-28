#include <stdio.h>

// Llenar la matriz
void llenarMatriz4(char *nombre, int n, int matriz[n][n]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Ingrese el valor para la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

// Imprimir la matriz
void imprimirMatriz4(char *nombre, int n, int matriz[n][n]) {
    printf("\nNombre de la matriz: %s\n", nombre);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Multiplicar dos matrices cuadradas
void multiplicar(int n, int A[n][n], int B[n][n], int resultado[n][n]) {
    // Inicializar la matriz resultado en cero
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            resultado[i][j] = 0;

    // Multiplicación estándar de matrices
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            for (int k = 0; k < n; k++)
                resultado[i][j] += A[i][k] * B[k][j];
}

// Copiar matriz origen a destino
void copiarMatriz(int n, int origen[n][n], int destino[n][n]) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            destino[i][j] = origen[i][j];
}

// Elevar la matriz a un exponente entero positivo
void elevarMatriz(int n, int matriz[n][n], int exponente, int resultado[n][n]) {
    // Inicializar como matriz identidad
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            resultado[i][j] = (i == j) ? 1 : 0;

    int temp[n][n];  // Matriz temporal

    for (int i = 0; i < exponente; i++) {
        multiplicar(n, resultado, matriz, temp);     // resultado × matriz → temp
        copiarMatriz(n, temp, resultado);            // temp → resultado
    }
}

int main() {
    int n, exponente;

    printf("Ingrese el tamanio: ");
    scanf("%d", &n);

    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);

    int matriz_a[n][n];
    int resultado[n][n];

    llenarMatriz4("Matriz A", n, matriz_a);
    imprimirMatriz4("Matriz A", n, matriz_a);

    elevarMatriz(n, matriz_a, exponente, resultado);
    imprimirMatriz4("Matriz A elevada", n, resultado);

    return 0;
}

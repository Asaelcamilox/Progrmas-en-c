#include <stdio.h>
#include <stdbool.h>

// Función para llenar la matriz
void llenarMatriz2(char *nombre, int raiz, char matriz[raiz][raiz]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < raiz; i++) {
        for (int j = 0; j < raiz; j++) {
            printf("Ingrese un caracter para la posicion [%d][%d]: ", i, j);
            scanf(" %c", &matriz[i][j]); // nota el espacio antes de %c
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz2(char *nombre, int raiz, char matriz[raiz][raiz]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < raiz; i++) {
        for (int j = 0; j < raiz; j++) {
            printf(" %c ", matriz[i][j]);
        }
        printf("\n");
    }
}

// Función para volcar la matriz en un arreglo 1D
void vaciarEnArreglo2(int raiz, char matriz[raiz][raiz], char arreglo[]) {
    int k = 0;
    for (int i = 0; i < raiz; i++) {
        for (int j = 0; j < raiz; j++) {
            arreglo[k++] = matriz[i][j];
        }
    }
}

// Función para imprimir el arreglo 1D
void imprimirArreglo2(char *nombre, char arreglo[], int tamanio) {
    printf("%s: ", nombre);
    for (int i = 0; i < tamanio; i++) {
        printf("%c ", arreglo[i]);
    }
    printf("\n");
}

int main() {
    int numero;
    printf("Dame un numero: ");
    scanf("%d", &numero);

    bool flag = false;
    int raiz = 0;

    // Verificar si el número es cuadrado perfecto
    for (int i = 1; i <= 100; i++) {
        if (i * i == numero) {
            flag = true;
            raiz = i;
            break;
        }
    }

    if (flag == true) {
        char matriz[raiz][raiz];
        char arreglo[raiz * raiz];

        llenarMatriz2("Matriz", raiz, matriz);
        imprimirMatriz2("Matriz", raiz, matriz);
        vaciarEnArreglo2(raiz, matriz, arreglo);
        imprimirArreglo2("Arreglo", arreglo, raiz * raiz);
    } else {
        printf("No tiene raiz\n");
    }

    return 0;
}

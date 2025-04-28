#include <stdio.h>

void llenarMatriz(char *nombre, int filas, int columnas, int matriz[filas][columnas]) {
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            }
        }
    }



void saveMatriz(int filas, int columnas, int matriz[filas][columnas]) {

 FILE *archivo = fopen("../matriz.txt", "w");

 if (archivo == NULL) {

 printf("Error al abrir el archivo.\n");

 return;

 }

 

 for (int i = 0; i < filas; i++) {

 for (int j = 0; j < columnas; j++) {

 fprintf(archivo, "%d ", matriz[i][j]);

 }

 fprintf(archivo, "\n");

 }

 

 fclose(archivo);

 printf("Matriz guardada en 'matriz.txt' exitosamente.\n");

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



void sumarMatriz(int filas, int columnas,

    int matriz1[filas][columnas], int matriz2[filas][columnas],

    int matrizr[filas][columnas]){

    for (int i = 0 ; i < filas; i++){

        for (int j = 0 ; j < columnas; j++){

            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];

        }

    }
 

}

void restaMatriz(int filas, int columnas,

    int matriz1[filas][columnas], int matriz2[filas][columnas],

    int matrizr[filas][columnas]){

    for (int i = 0 ; i < filas; i++){

        for (int j = 0 ; j < columnas; j++){

            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];

        }

    }
 

}



//Realizar el método para escalar

void escalarMatriz(int filas, int columnas,

    int matriz1[filas][columnas], int escalar,

    int matrizr[filas][columnas]){

    for (int i = 0 ; i < filas; i++){

        for (int j = 0 ; j < columnas; j++){

            matrizr[i][j] = matriz1[i][j] * escalar;

        }

    }

}

int determinanteSarrus(int matriz[3][3]) {
    int suma_diagonal = 0, suma_inversa = 0;

   
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(i + j) % 3];  
        }
        suma_diagonal += producto;
    }

   
    for (int i = 0; i < 3; i++) {
        int producto = 1;
        for (int j = 0; j < 3; j++) {
            producto *= matriz[j][(3 + i - j) % 3];  
        }
        suma_inversa += producto;
    }

   
    return suma_diagonal - suma_inversa;
}

//Realizar el método para multiplicar
int main() {

 int filas, columnas;
 int escalar;
 

 printf("Ingrese el número de filas: ");

 scanf("%d", &filas);

 printf("Ingrese el número de columnas: ");

 scanf("%d", &columnas);

 printf("Dame el numero para sacar el escalar de A");
 scanf("%d", &escalar);
 

 int matriz_a[filas][columnas];

 int matriz_b[filas][columnas];

 int matriz_r[filas][columnas];

 int calcularDeterminante = (filas == 3 && columnas == 3);


 llenarMatriz("Matriz A", filas, columnas, matriz_a);
 llenarMatriz("Matriz B", filas, columnas, matriz_b);

 imprimirMatriz("Matriz A", filas, columnas, matriz_a);
 imprimirMatriz("MAtriz B", filas, columnas, matriz_b);

 sumarMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
 imprimirMatriz("SUMA A-B", filas, columnas, matriz_r);

 restaMatriz(filas, columnas, matriz_a, matriz_b, matriz_r);
 imprimirMatriz("RESTA A-B", filas, columnas, matriz_r);

 escalarMatriz(filas, columnas, matriz_a, escalar, matriz_r);
 imprimirMatriz("Escalar A", filas, columnas, matriz_r);

 if (calcularDeterminante) {
    int det = determinanteSarrus(matriz_a);
    printf("Determinante de Matriz A (Sarrus): %d\n", det);
    } else {
    printf("La determinante solo se puede calcular para matrices 3x3.\n");
}

 saveMatriz(filas, columnas, matriz_r);

 return 0;

}
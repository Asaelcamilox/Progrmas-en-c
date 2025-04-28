#include <stdio.h>
 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}


void llenarMatriz(int x, int y, char *nombre, int matriz[3][3]) {
    gotoxy(x + 5, y);
    printf("%s\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j * 4, y + 1 + i);
            printf(" ");
            gotoxy(x + 2 + j * 4, y + 1 + i);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatrizEnPosicion(int x, int y, char *nombre, int matriz[3][3]) {
    // Nombre de la matriz
    gotoxy(x + 5, y);
    printf("%s", nombre);
    
    // Contenido de la matriz con bordes laterales
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i);     // Asterisco izquierdo
        printf("*");
        
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j*4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        
        gotoxy(x + 14, y + 1 + i); // Asterisco derecho
        printf("*");
    }
}

void sumarMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
}

void restaMatriz(int matriz1[3][3], int matriz2[3][3], int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizr[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }
}

void escalarMatriz(int matriz1[3][3], int escalar, int matrizr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
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
 
int main(){
    int opc;
    printf("\033[2J"); // Limpia la pantall
    
    gotoxy(8, 10);
    printf("MENU");

    gotoxy(6, 13);
    printf("1) ");
    gotoxy(8, 13);
    printf("Suma\n");

    gotoxy(6, 14);
    printf("2) ");
    gotoxy(8, 15);
    printf("Resta\n");

    gotoxy(6, 15);
    printf("3) ");
    gotoxy(8, 16);
    printf("Escalar\n ");

    gotoxy(6, 18);
    printf("4) ");
    gotoxy(8, 18);
    printf("determinante\n ");

    gotoxy(23, 18);
    printf("opc");
    gotoxy(28, 18);
    printf(" ");
    scanf("%d", &opc);

    printf("\033[2J"); // Limpia la pantalla
    int escalar;
    printf("Dame el numero para escalar la matriz A: ");
    scanf("%d", &escalar);
    int matriz_a[3][3];
    int matriz_b[3][3];
    int matriz_suma[3][3];
    int matriz_resta[3][3];
    int matriz_escalar[3][3];
    llenarMatriz(5, 2, "Matriz A", matriz_a);
    llenarMatriz(30, 2, "Matriz B", matriz_b);

    switch(opc){
        case 1:{
            sumarMatriz(matriz_a, matriz_b, matriz_suma);
            imprimirMatrizEnPosicion(15, 10, "A + B", matriz_suma); 
        }
        break;

        case 2:{
            restaMatriz(matriz_a, matriz_b, matriz_resta);
            imprimirMatrizEnPosicion(80, 2, "A - B", matriz_resta);
        }
        break;

        case 3:{
            escalarMatriz(matriz_a, escalar, matriz_escalar);
            imprimirMatrizEnPosicion(105, 2, "Esc*A", matriz_escalar);
        }
        break;

        case 4:{
            int det = determinanteSarrus(matriz_a);
            printf("Determinante de Matriz A (Sarrus): %d\n", det);
        }
        break;

        default:
            printf("%s\n","no ha seleccionado una opcion valida");
        break;
    }
}
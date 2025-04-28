#include <stdio.h>
#include <stdlib.h>

// Función gotoxy usando secuencias ANSI
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

// Limpiar pantalla
void clearScreen() {
    printf("\033[2J");
}

void dibujarMarco() {
    int ancho = 120, alto = 30;

    for (int i = 1; i <= ancho; i++) {
        gotoxy(i, 1); printf("═");
        gotoxy(i, alto); printf("═");
    }

    for (int i = 1; i <= alto; i++) {
        gotoxy(1, i); printf("║");
        gotoxy(ancho, i); printf("║");
    }

    gotoxy(1, 1); printf("╔");
    gotoxy(ancho, 1); printf("╗");
    gotoxy(1, alto); printf("╚");
    gotoxy(ancho, alto); printf("╝");
}

void llenarMatriz(int x, int y, char *nombre, int matriz[3][3]) {
    gotoxy(x + 5, y);
    printf("Nombre de la matriz: %s\n", nombre);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j * 4, y + 1 + i);
            printf("   ");
            gotoxy(x + 2 + j * 4, y + 1 + i);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimirMatrizEnPosicion(int x, int y, char *nombre, int matriz[3][3]) {
    gotoxy(x + 5, y);
    printf("%s", nombre);
    for (int i = 0; i < 3; i++) {
        gotoxy(x, y + 1 + i); printf("*");
        for (int j = 0; j < 3; j++) {
            gotoxy(x + 2 + j * 4, y + 1 + i);
            printf("%3d", matriz[i][j]);
        }
        gotoxy(x + 14, y + 1 + i); printf("*");
    }
}

void saveMatriz(int matriz[3][3]) {
    FILE *archivo = fopen("../matriz.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            fprintf(archivo, "%d ", matriz[i][j]);
        }
        fprintf(archivo, "\n");
    }
    fclose(archivo);
}

void sumarMatriz(int m1[3][3], int m2[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) res[i][j] = m1[i][j] + m2[i][j];
}

void restaMatriz(int m1[3][3], int m2[3][3], int res[3][3]) {
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) res[i][j] = m1[i][j] - m2[i][j];
}

void escalarMatriz(int m1[3][3], int escalar, int res[3][3]) {
    for (int i = 0; i < 3; i++) for (int j = 0; j < 3; j++) res[i][j] = m1[i][j] * escalar;
}

int determinanteSarrus(int m[3][3]) {
    int sd = 0, si = 0;
    for (int i = 0; i < 3; i++) {
        int p = 1;
        for (int j = 0; j < 3; j++) p *= m[j][(i + j) % 3];
        sd += p;
    }
    for (int i = 0; i < 3; i++) {
        int p = 1;
        for (int j = 0; j < 3; j++) p *= m[j][(3 + i - j) % 3];
        si += p;
    }
    return sd - si;
}

void mostrarMenu() {
    gotoxy(45, 3); printf("MENÚ DE MATRICES");
    gotoxy(40, 5); printf("1. Llenar matrices");
    gotoxy(40, 6); printf("2. Sumar matrices");
    gotoxy(40, 7); printf("3. Restar matrices");
    gotoxy(40, 8); printf("4. Escalar matriz A");
    gotoxy(40, 9); printf("5. Determinante de A");
    gotoxy(40, 10); printf("6. Guardar suma en archivo");
    gotoxy(40, 11); printf("0. Salir");
    gotoxy(40, 13); printf("Seleccione una opción: ");
}

int main() {
    int matriz_a[3][3], matriz_b[3][3], suma[3][3], resta[3][3], escalar_result[3][3], escalar;
    int opcion;

    do {
        clearScreen();
        dibujarMarco();
        mostrarMenu();
        scanf("%d", &opcion);
        clearScreen();
        dibujarMarco();

        switch (opcion) {
            case 1:
                llenarMatriz(10, 5, "Matriz A", matriz_a);
                llenarMatriz(40, 5, "Matriz B", matriz_b);
                break;
            case 2:
                sumarMatriz(matriz_a, matriz_b, suma);
                imprimirMatrizEnPosicion(10, 5, "A + B", suma);
                break;
            case 3:
                restaMatriz(matriz_a, matriz_b, resta);
                imprimirMatrizEnPosicion(10, 5, "A - B", resta);
                break;
            case 4:
                gotoxy(10, 5); printf("Escalar: ");
                scanf("%d", &escalar);
                escalarMatriz(matriz_a, escalar, escalar_result);
                imprimirMatrizEnPosicion(10, 7, "Esc * A", escalar_result);
                break;
            case 5:
                gotoxy(10, 5);
                printf("Determinante de A: %d", determinanteSarrus(matriz_a));
                break;
            case 6:
                saveMatriz(suma);
                gotoxy(10, 5); printf("Guardado en matriz.txt");
                break;
            case 0:
                gotoxy(10, 27); printf("Saliendo...");
                break;
            default:
                gotoxy(10, 5); printf("Opción inválida");
        }

        if (opcion != 0) {
            gotoxy(10, 28);
            printf("Presione Enter para continuar...");
            getchar(); getchar();
        }
    } while (opcion != 0);

    clearScreen();
    return 0;
}

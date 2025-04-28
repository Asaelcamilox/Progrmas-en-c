#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    printf("\033[2J"); // Limpia la pantalla
    int alto = 10;
    int ancho_franja = 10;
    int inicio_y = 5;
    int inicio_x = 5;

    for (int fila = 0; fila < alto; fila++) {
        gotoxy(inicio_x, inicio_y + fila);

        // Franja verde
        setColor("\033[42m"); // fondo verde
        for (int i = 0; i < ancho_franja; i++) {
            printf(" ");
        }

        // Franja blanca
        setColor("\033[47m"); // fondo blanco
        for (int i = 0; i < ancho_franja; i++) {
            if (fila == alto / 2 && i == ancho_franja / 2 - 1) {
                setColor("\033[30;47m"); // texto negro en blanco
                printf("*");             // "escudo"
                setColor("\033[47m");    // vuelve al blanco
            } else {
                printf(" ");
            }
        }

        // Franja roja
        setColor("\033[41m"); // fondo rojo
        for (int i = 0; i < ancho_franja; i++) {
            printf(" ");
        }

        setColor("\033[0m"); // reset color
        printf("\n");
    }

    gotoxy(0, inicio_y + alto + 1);
    return 0;
}

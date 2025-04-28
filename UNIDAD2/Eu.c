#include <stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}

void setColor(const char* color) {
    printf("%s", color);
}

int main() {
    printf("\033[2J"); // Limpia la pantalla
    int inicio_x = 5;
    int inicio_y = 3;
    int ancho_total = 45;
    int ancho_union = 18; // Ancho del cuadro azul
    int alto_union = 7;   // Alto del cuadro azul

    for (int fila = 0; fila < 13; fila++) {
        gotoxy(inicio_x, inicio_y + fila);

        // Colores alternos de franjas: rojo (par), blanco (impar)
        if (fila % 2 == 0) {
            setColor("\033[41m"); // fondo rojo
        } else {
            setColor("\033[47m"); // fondo blanco
        }

        // Parte azul para las primeras 7 filas
        if (fila < alto_union) {
            // Cuadro azul a la izquierda
            setColor("\033[44m"); // azul
            for (int i = 0; i < ancho_union; i++) {
                printf(" ");
            }

            // El resto de la franja en rojo/blanco
            if (fila % 2 == 0)
                setColor("\033[41m");
            else
                setColor("\033[47m");

            for (int i = ancho_union; i < ancho_total; i++) {
                printf(" ");
            }

        } else {
            // Filas sin cuadro azul
            for (int i = 0; i < ancho_total; i++) {
                printf(" ");
            }
        }

        setColor("\033[0m");
        printf("\n");
    }

    gotoxy(0, inicio_y + 14);
    return 0;
}

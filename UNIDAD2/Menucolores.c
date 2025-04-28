#include <stdio.h>
 
void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}
 
int main() {
 
    printf("\033[2J"); // Limpia la pantalla

    setColor("\033[7;32m");
    gotoxy(5, 7);
    printf("Calculadora Basica de gotoxy y switch-case:");
    setColor("\033[0m");
    
    setColor("\033[4;30m");
    gotoxy(5, 8);
    printf("Menu de operaciones:");
    setColor("\033[0m");

    setColor("\033[7;31m");
    gotoxy(6, 13);
    printf("1. ");
    setColor("\033[0m");
    gotoxy(7, 13);
    printf("Suma\n");

    setColor("\033[7;32m");
    gotoxy(6, 14);
    printf("2. ");
    setColor("\033[0m");
    gotoxy(7, 15);
    printf("Resta\n");


    setColor("\033[7;33m");
    gotoxy(6, 15);
    printf("3. ");
    setColor("\033[0m");
    gotoxy(7, 16);
    printf("Multiplicacion\n ");

    setColor("\033[7;36m");
    gotoxy(6, 17);
    printf("4. ");
    setColor("\033[0m");
    gotoxy(7, 18);
    printf("Division\n ");

    gotoxy(5, 19);
    printf("Seleccione una opcion");
    setColor("\033[7;37m");
    gotoxy(28, 19);
    printf("(1-4)");
    setColor("\033[0m");
 
    return 0;
}

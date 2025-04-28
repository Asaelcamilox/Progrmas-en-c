#include <stdio.h>

void setColor(const char* color){
    printf("%s", color);
}


int main() {
    printf("\033[2J"); // Limpia la pantalla
    int tam;
    printf("Ingrese el tamano del cuadrado: ");
    scanf("%d", &tam);

    for (int i = 0; i < tam; i++) {      
        for (int j = 0; j < tam; j++) { 
            setColor("\033[7;34m");
            printf("  "); // Espacio "relleno" con fondo simulado
            printf("\033[0m"); // Restablece color después de cada bloque
        }
        printf("\n");
    }

    return 0;
}

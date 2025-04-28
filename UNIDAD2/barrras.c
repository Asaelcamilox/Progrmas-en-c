#include <stdio.h>

// Función para cambiar el color de fondo
void setBgColor(int color) {
    printf("\033[%dm", color + 10); // Los colores de fondo son +10 de los de texto
}

// Función para invertir colores (fondo y texto)
void invertColors() {
    printf("\033[3m"); // Código ANSI para invertir colores
}

// Función para resetear el formato
void resetFormat() {
    printf("\033[0m");
}

int main() {
    int num_barras, i, j;
    int alturas[7]; // Máximo 7 barras
    int colors[] = {31, 32, 33, 34, 35, 36, 37}; // Colores ANSI base
    
    // Pedir número de barras (1-7)
    printf("Cuantas barras quieres? (1-7): ");
    scanf("%d", &num_barras);
    
    while(num_barras < 1 || num_barras > 7) {
        printf("introduce un numero entre 1 y 7 solamente: ");
        scanf("%d", &num_barras);
    }
    
    // Pedir altura de cada barra
    for(i = 0; i < num_barras; i++) {
        printf("Altura de la barra %d: ", i+1);
        scanf("%d", &alturas[i]);
    }
    
    // Encontrar la altura máxima para el marco
    int max_altura = 0;
    for(i = 0; i < num_barras; i++) {
        if(alturas[i] > max_altura) {
            max_altura = alturas[i];
        }
    }
    
    // Dibujar la gráfica
    printf("\nGrafica de barras:\n\n");
    
    // Parte superior del marco
    printf(" ");
    for(i = 0; i < num_barras * 4; i++) {
        printf("-");
    }
    printf("\n");
    
    // Filas de la gráfica (de arriba hacia abajo)
    for(i = max_altura; i > 0; i--) {
        printf("|");
        for(j = 0; j < num_barras; j++) {
            if(alturas[j] >= i) {
                setBgColor(colors[j]); // Establecer color de fondo
                invertColors();       // Invertir colores para mejor visibilidad
                printf("***");       // Barras de 3 caracteres de ancho
                resetFormat();       // Restablecer formato
                printf(" ");
            } else {
                printf("    ");      // Espacios vacíos
            }
        }
        printf("\b|\n"); // Ajuste para el borde derecho
    }
    
    // Parte inferior del marco
    printf(" ");
    for(i = 0; i < num_barras * 4; i++) {
        printf("-");
    }
    printf("\n");
    
    // Etiquetas de las barras (con colores invertidos)
    printf(" ");
    for(i = 0; i < num_barras; i++) {
        setBgColor(colors[i]);
        invertColors();
        printf(" %d ", i+1);
        resetFormat();
        if(i < num_barras - 1) printf(" ");
    }
    printf("\n");
    
    return 0;
}
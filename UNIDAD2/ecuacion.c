#include <stdio.h>
#include <math.h>  // Necesario para sqrt()

void resolver_ecuacion(float a, float b, float c) {
    float discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        // Dos soluciones reales
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las soluciones son: x1 = %.2f y x2 = %.2f\n", x1, x2);
    } else{
        printf("No se puede, raiz negativa");
    } 
}

int main() {
    float a, b, c;

    printf("Ingrese los coeficientes a, b y c de la ecuacion cuadratica:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("No es una ecuación cuadrática (a no puede ser 0).\n");
    } else {
        resolver_ecuacion(a, b, c);
    }

    return 0;
}
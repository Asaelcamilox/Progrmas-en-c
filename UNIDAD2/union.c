#include<stdio.h>

union Dato{
    int entero;
    float decimal;
    char texto[20];
};

int main(){
    union Dato variable;

    variable.entero = 42;
    printf("Entero: %d\n", variable.entero);

    variable.decimal = 3.14;
    printf("Decimal: %d\n", variable.decimal);

    sprintf(variable.texto, "hola.c");
    printf("Texto: %d\n", variable.entero);

    printf("\nDespues de asignar un texto:\n");
    printf("Entero: %d\n", variable.entero);
    printf("Decimal: %.2f\n", variable.decimal);
    printf("Texto: %s\n", variable.texto);

    return 0;
}
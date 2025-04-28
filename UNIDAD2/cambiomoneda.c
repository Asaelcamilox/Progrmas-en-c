#include<stdio.h>

float cambio(float d){
    return d * 20.34;
}

int main(){
    float d;
    printf("Dame los dolares y te dire cuanto cuesta en pesos\n");
    scanf("%f", &d);
    float conversion = cambio(d);
    printf("Moneda Cantidad Precio\n");
    printf(" USD    %.2f     $%.2f\n", d, conversion);
}
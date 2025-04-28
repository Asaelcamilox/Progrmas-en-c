#include<stdio.h>

int sumatoria(int a, int b){
    int suma = 0;
    for(int i = a + 1; i < b; i++){
            suma = suma + i;

    }
    return suma;
}

int main(){
    int a;
    int b;
    printf("Dame el primer numero\n");
    scanf("%d", &a);
    printf("Dame el otro numero\n");
    scanf("%d", &b);
    int numeros = sumatoria(a,b);
    printf("La suma de los numeros en el rango es: %d\n", numeros);
}
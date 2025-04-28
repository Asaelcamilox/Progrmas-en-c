#include<stdio.h>

int exponencial(int base, int exponente){
    int resultado = 1;
    for(int i = 0; i < exponente; i++){
        resultado = base * resultado;
    }

    return resultado;
}

int main(){
    int base, exponente; 
    printf("dame la base\n");
    scanf("%d", &base);
    printf("Dame el exponente\n");
    scanf("%d", &exponente);

    int resultado = exponencial(base, exponente);
    printf("%s%d", "El resulatdo es: ", resultado);
}
#include<stdio.h>

int numero(int a){
    return a;
}

int main(){
    int a;
    printf("Dame el numero y te dire si es positivo o negativo\n");
    scanf("%d", &a);
    int tipo = numero(a);
    
    if(numero(a) > 1){
        printf("el numero es postivo");
    }else{
        printf("el numero es negativo");
    }
}
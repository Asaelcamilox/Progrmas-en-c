#include<stdio.h>

int numero(int a, int b){
    if(a > b){
        return a;
    }else{
        return b;
    }
    
}

int main(){
    int a;
    int b;
    printf("Dame un numero\n");
    scanf("%d", &a);
    printf("Dame otro numero\n");
    scanf("%d", &b);
    int resultado = numero(a,b);

    printf("el numero mayor es: %d", resultado);
}
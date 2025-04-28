#include<stdio.h>

int numero(int a, int b, int c){
    if (a > b && a > c) {
        return a;
    } else if (b > c) {
        return b;
    } else {
        return c;
    }
}

int main(){
    int a;
    int b;
    int c;
    printf("Dame un numero\n");
    scanf("%d", &a);
    printf("Dame otro numero\n");
    scanf("%d", &b);
    printf("Dame otro numero\n");
    scanf("%d", &c);
    int resultado = numero(a,b,c);

    printf("el numero mayor es: %d", resultado);
}
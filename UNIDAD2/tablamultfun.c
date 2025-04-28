#include<stdio.h>

int tabla_mult(int a){
    for(int i = 0; i <= 10; i++){
        int tabla = a * i;
        printf("%d x %d = %d\n", a, i, tabla);
    }
}

int main(){
    int a;
    printf("Dame un numero\n");
    scanf("%d", &a);
    printf("Tabla de multiplicar\n");
    tabla_mult(a);

}
#include<stdio.h>

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    int result = a - b;
    return result;
}

int multi(int a){
    return a * a;
}


float dividir(int a, int b){
    return a / b;
}

void imprimir (int a, int b, int c, float d){
    printf("\nResultados: \nSuma: %d \nResta: %d \nMulti:%d \nDiv:%.2f",a,b,c,d);
}

int main(){
    int op1 = suma(2,3);
    int op2 = resta(5,3);
    int op3 = multi(3);
    float op4 = dividir(5,3);
    imprimir(op1,op2,op3,op4);
}

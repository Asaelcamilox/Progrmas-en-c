#include<stdio.h>
int main(){
printf("\n%s\n", "tabla de multiplicacion");
int tabla = 0;
while(tabla<=10){
    int n = 0;
    while(n < 10){
        int mult = n * tabla;
        printf("%s%d%s%d%s%d\n", "(", tabla, ")(", n, ")=", mult);
        n++;
    }
    tabla++;
    }
}
#include<stdio.h>
int main (){
    int contador = 0;
    int limite = 10;

    printf("%4s\n","EJEMPLO DE IMPRESION");
    while(contador <= limite){
        printf("%4d", contador);
        contador ++;
     } 
     printf("\n%s\n","ejemplo de impresion"); 

     int limitey = 10;
     while(limitey >= 0){
        int limitex = 10;
        while(limitex >= 0){
            printf("%4d", limitex);
            limitex--;
        }
        printf("\n");
        limitey--;
     }

     printf("\n%s\n","ejemplo de impresion 0 al 10"); 

     int limitey2 = 0;
     while(limitey2 <= 10){
        int limitex2 = 0;
        while(limitex2 <= 10){
            printf("%4d", limitex2);
            limitex2++;
        }
        printf("\n");
        limitey2++;
     }
}
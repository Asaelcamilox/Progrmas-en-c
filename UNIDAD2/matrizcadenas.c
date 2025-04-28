#include<stdio.h>
#define Filas 3
#define columnas 3 

int  main(){
    char matriz [Filas][columnas][50];
    for (int i = 0; i < Filas; i++){
        for(int j = 0; j< columnas; j++){
        printf("dame la palabra: ");
        scanf("%s", matriz[i][j]);
        }
    }

    printf("recorriendo la matriz: \n");
    for(int i=0; i<Filas; i++){
        for(int j = 0; j< columnas; j++){
            printf("%-10s ", matriz[i][j]);
            printf(" | "); 
        }
        printf("\n");
    }
    return 0;
}
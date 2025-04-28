#include<stdio.h>
#define Filas 3
#define columnas 3 

int  main(){
    int matriz [Filas][columnas] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    printf("recorriendo la matriz: \n");
    for(int i=0; i<Filas; i++){
        for(int j = 0; j< columnas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}
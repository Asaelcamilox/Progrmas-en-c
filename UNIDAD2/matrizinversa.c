#include<stdio.h>
#define Filas 4
#define columnas 4

int main(){
    int matriz [Filas][columnas] ={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    printf("recorriendo la matriz: \n");
    for(int i=0; i<Filas; i++){
        for(int j = 0; j< columnas; j++){
            printf("%-3d ", matriz[i][j]);
            printf("|");
        }
        printf("\n");
    }

    printf("Matriz al reves: \n");
    for(int i=3; i>= 0; i--){
        for(int j = 3; j>=0; j--){
            printf("%-3d ", matriz[i][j]);
            printf("|");
        }
        printf("\n");
    }
    return 0;

}
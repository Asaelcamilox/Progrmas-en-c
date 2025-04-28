#include <stdio.h>

#define Filas 6
#define columnas 6  

int main() {
    int matriz[Filas][columnas] ={
        {1,2,3,4,5,6},
        {7,8,9,10,11,12},
        {13,14,15,16,17,18},
        {19,20,21,22,23,24},
        {25,26,27,28,29,30},
        {31,32,33,34,35,36}
    };

    
    printf("\nRecorrido matriz:\n");
    for(int i=0; i<Filas; i++){
        for(int j = 0; j< columnas; j++){
            if(j %2 == 1){
            printf("%-10d ", matriz[i][j]);
            printf(" | ");
        }else{
            printf("%-10s ", "#");
            printf(" | ");
        }
        }
        printf("\n");
    }
    return 0;
}
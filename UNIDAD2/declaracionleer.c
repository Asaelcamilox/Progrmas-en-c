/**
*programa que se encarga de crear en arreglo
* a partit de un tamaña indicado
*
*/
#include<stdio.h>
int main(){
    int size;
    printf("ingrese el tamaño del arreglo: \n");
    scanf("%d", &size);

    int arreglonum[size];

    for (int i = 0 ; i < size; i++){
        printf("Ingrese el valor en posicion [%d]: \n", i);
        int swap;
        scanf("%d", &swap);
        arreglonum[i] = swap;
    }
    //imprime los valores del arreglo
    for(int i = 0 ; i < size; i++){
        printf("arreglo[%d] = %d\n", i, arreglonum[i]);
    }
    return 0;
} 
#include<stdio.h>
int main(){
    int num [] = {12, 20 ,30, 20};
    int size = sizeof(num)/sizeof(num[0]);

    printf("Tamaño: %d\n", size);

    for (int i = 0 ; i < size; i++){
        printf("numeros[%d] = %d\n", i, num[i]);
    }
}
#include<stdio.h>
int main(){
    int asteriscos2 = 1;
    int espacios = 6;
    for (int i=6; i>= 0; i --){
        for(int j = 1; j <= espacios; j++ ){
        printf("%4s"," ");
        }
    espacios--;
    for(int k = 1; k <= asteriscos2; k++ ){
        printf("%4s","*");
    }   
    asteriscos2++;
    printf("\n");
    }   
}
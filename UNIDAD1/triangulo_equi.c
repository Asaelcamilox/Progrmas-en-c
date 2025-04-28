#include<stdio.h>
int main(){
    int espacios3 =6; 
    int asteriscos3 = 1;
    for(int i = 6; i >= 0 ; i--){
        for(int j = 1; j <= espacios3; j++){
        printf("%4s"," ");
    }
    espacios3--;
    for(int k = 1; k <= asteriscos3; k++){
        printf("%4s","*");
    }
    asteriscos3 +=2;
    printf("\n");
    }
}
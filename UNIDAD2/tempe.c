#include<stdio.h>

float temperatura(float a){
    return (a * 9/5) + 32;
}

int main(){
    float a;
    printf("Dame la temperatura en C y la convertire a F\n");
    scanf("%f", &a);
    float conversion = temperatura(a);
    printf("Esta es la conversion %.2f = %.2f",a,conversion);
}
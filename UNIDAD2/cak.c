#include<stdio.h>

float temperatura(float a){
    return a+273;
}

int main(){
    float a;
    printf("Dame la temperatura en C y la convertire a k\n");
    scanf("%f", &a);
    float conversion = temperatura(a);
    printf("Esta es la conversion %.2f = %.2f",a,conversion);
}
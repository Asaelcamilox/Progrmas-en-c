#include<stdio.h>

float temperatura(float a){
    return (a - 32) * 5/9;
}

int main(){
    float a;
    printf("Dame la temperatura en F y la convertire a C\n");
    scanf("%f", &a);
    float conversion = temperatura(a);
    printf("Esta es la conversion %.2f = %.2f",a,conversion);
}
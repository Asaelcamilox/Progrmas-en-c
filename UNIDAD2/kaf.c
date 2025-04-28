#include<stdio.h>

float temperatura(float a){
    return ((9/5*a)-273) + 32;
}

int main(){
    float a;
    printf("Dame la temperatura en k y la convertire a F\n");
    scanf("%f", &a);
    float conversion = temperatura(a);
    printf("Esta es la conversion %.2f = %.2f",a,conversion);
}
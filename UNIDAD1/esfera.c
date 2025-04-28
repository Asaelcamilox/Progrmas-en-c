#include<stdio.h>
int main(){
    int r;
    float pi = 3.1416;
    float v;
    float area;
    
    printf("%s\n", "Dame el radio:");
    scanf("%d",&r);

    v = (4*pi*(r*r*r))/3;
    printf("%s%f\n", "El volumen de la esfera es de:", v);
    area = 4*pi*(r*r);
    printf("%s%f\n", "El area es de:", area);
}

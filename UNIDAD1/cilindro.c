#include<stdio.h>
int main (){
    
    float r;
    float h;
    float pi = 3.1416;
    float v;
    float area;
     
    printf("%s\n", "Dame el radio:");
    scanf("%f",&r);
    printf("%s\n", "Dame la altura:");
    scanf("%f",&h);

    v = (pi)*(r*r)*(h);
    printf("%s%f\n", "el volumen:", v);
    area = ((2)*(pi)*(r)*(h)) + ((2)*(pi)*(r*r));
    printf("%s%f\n", "el area es de:", area);
}   

#include<stdio.h>
int main (){
    int h;
    float pi  = 3.1416;
    int r;
    float v, g;
    float abase, alateral, atotal;

    printf("%s\n", "Dame el radio:");
    scanf("%d",&r);
    printf("%s\n", "Dame la altura:");
    scanf("%d",&h);

    v = (pi*(r*r*r)*h)/3;
    printf("%s%f\n", "El volumen del cono es de:", v);
    
    g = (h * 1.1) + r;
    abase = pi * r * r;
    alateral = pi * r * g;
    atotal = abase + alateral;
    printf("%s%f","El area es de:", atotal);
}
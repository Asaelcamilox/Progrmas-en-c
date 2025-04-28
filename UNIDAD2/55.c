#include<stdio.h>

void setColor(const char* color){
    printf("%s", color);
}

int main(){
    //limpia pantalla 
    printf("\033[2J");

    setColor("\033[4;36m");
    printf("\n Bienvenido al progrma con marco y colores\n");

    //restaura color
    setColor("\033[0m");

    setColor("\033[7;34m");
    printf("\n Bienvenido al progrma con marco y colores\n");

    //restaura color
    setColor("\033[0m");

    setColor("\033[4;34m");
    printf("\n Bienvenido al progrma con marco y colores\n\n");

    setColor("\033[0m");
    return 0;
}
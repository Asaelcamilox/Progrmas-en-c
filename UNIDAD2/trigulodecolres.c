#include<stdio.h>

void gotoxy(int x, int y) {
    printf("\033[%d;%dH", y, x);
}
 
// Función para cambiar el color
void setColor(const char* color) {
    printf("%s", color);
}


int main(){
int asteriscos = 1;
int fila=11;
for (int i=6; i>= 0; i --){
    gotoxy(5, fila);
    for(int j = 1; j <= asteriscos; j++ ){
        setColor("\033[7;32m");
        printf("%4s","*");
    }
    asteriscos++;
    fila ++;
    setColor("\033[0m");
    printf("\n");
    }
}   
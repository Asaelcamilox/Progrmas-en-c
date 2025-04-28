#include<stdio.h> //libreriaS//
//Imprime la tabla Fahrenheit-celsius para fahr=0, 20.....,300//
int main()//metodo principal//
{

        int fahr, celsius; //se declaran las variables de celuios y fahrenheit//
        int lower, upper, step;
        lower=0; //limite inferior de la tabla//
        upper=300; //imite superior de la tabla//
        step=20; //incremento//
        fahr = lower; //se dice que la variabale fahr es igual a lower//
        while (fahr<=upper) { //se igualan las variables//
            celsius = 5*(fahr-32)/9; //se haceoperacion//
            printf("%d\t%d\n",fahr, celsius); //se imprimen valores//
            fahr=fahr+step; //contador//
            }
}

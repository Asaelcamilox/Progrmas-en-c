#include<stdio.h> //libreriaS//
//Imprime la tabla Fahrenheit-celsius para fahr=0, 20.....,300//
int main()//metodo principal//
{

        float fahr2, celsius2; //se declaran las variables de celuios y fahrenheit//
        int lower2, upper2, step2;
        lower2=0; //limite inferior de la tabla//
        upper2=300; //imite superior de la tabla//
        step2=20; //incremento//
        fahr2 = lower2; //se dice que la variabale fahr es igual a lower//
        while (fahr2<=upper2) { //se igualan las variables//
            celsius2 = 5*(fahr2-32)/9; //se haceoperacion//
            printf("%.4f\t%.4f\n",fahr2, celsius2); //se imprimen valores//
            fahr2=fahr2+step2; //contador//
            }
}

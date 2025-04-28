#include <stdio.h>

int main(){

int fno, sno, *ptr, *qtr, sum, res, multi, *sumapt, *restapt, *multiapt, *diviapt;// Declaración de variables y punteros
float divi;

printf("Numero 1:\n"); // Solicita al usuario ingresar el primer número
scanf("%d", &fno);// Almacena el primer número ingresado en la variable fno
printf("Numero 2:\n");// Solicita al usuario ingresar el segundo número
scanf("%d", &sno);// Almacena el segundo número ingresado en la variable sno

ptr=&fno;// ptr apunta a la dirección de memoria de fno
qtr=&sno;// qtr apunta a la dirección de memoria de sno

printf("\nApuntador1: %p", ptr);// Imprime la dirección de memoria de fno
printf("\nApuntador2: %p\n\n", qtr);// Imprime la dirección de memoria de sno

sum=*ptr + *qtr;// Suma los valores almacenados en fno y sno utilizando punteros
res=*ptr - *qtr;// Resta los valores almacenados en fno y sno
multi=*ptr * *qtr;// multiplica los valores almacenados en fno y sno
divi=(float)*ptr / *qtr;// divide los valores almacenados en fno y sno

printf("La suma es: %d\n", sum);// Imprime el resultado de la suma
printf("La resta es: %d\n", res);// Imprime el resultado de la resta
printf("La multiplicacion es: %d\n", multi);// Imprime el resultado de la multiplicacion 
printf("La division es: %.2f\n\n", divi);// Imprime el resultado de la division


sumapt=&sum;// sumapt apunta a la dirección de memoria de sum
restapt=&res;// resapt apunta a la dirección de memoria de res
multiapt=&multi;// mulapt apunta a la dirección de memoria de mul
diviapt=&divi;// divapt apunta a la dirección de memoria de div

printf("Apuntador de la suma: %p\n", sumapt);// Imprime la dirección de memoria de sum
printf("Apuntador de la resta: %p\n", restapt);// Imprime la dirección de memoria de res
printf("Apuntador de la multiplicacion: %p\n", multiapt);// Imprime la dirección de memoria de mul
printf("Apuntador de la division: %p\n", diviapt);// Imprime la dirección de memoria de div

return 0;// Indica que el programa finalizó correctamente
}

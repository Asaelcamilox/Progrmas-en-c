#include <stdio.h>

int main(){
    int a,b,c,d,e,;

    printf("ingrese valor a\n");
    scanf("%d", &a);
    printf("ingrese valor b\n");
    scanf("%d", &b);
    printf("ingrese valor c\n");
    scanf("%d", &c);
    printf("ingrese valor d\n");
    scanf("%d", &d);
    printf("ingrese valor e\n\n");
    scanf("%d", &e);

    int *const pa = &a;
    int *const pb = &b;
    int *const pc = &c;
    int *const pd = &d;
    int *const pe = &e;

    printf("Valores ingresados a=%p\n", &pa);
    printf("Valores ingresados b=%p\n", &pb);
    printf("Valores ingresados c=%p\n", &pc);
    printf("Valores ingresados d=%p\n", &pd);
    printf("Valores ingresados e=%p\n\n", &pe);

    int suma = *pa + *pa;
    printf("Resuldato de la suma: %d\n", suma);

    *pa = suma;
    printf("Valor nuevo: a=%d\n\n", *pa);

    int resta = *pb - *pb;
    printf("Resuldato de la resta: %d\n", resta);

    *pb = resta;
    printf("Valor nuevo b:=%d\n\n", *pb);

    int multi = *pc * *pc;
    printf("Resuldato de la multiplicacion: %d\n", multi);

    *pb = multi;
    printf("Valor nuevo: c=%d\n\n", *pc);

    int divi = *pd + *pd;
    printf("Resuldato de la division: %d\n", resta);

    *pd = divi;
    printf("Valor nuevo: d=%d\n\n", *pd);
}


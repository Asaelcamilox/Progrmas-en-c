#include <stdio.h>

int main(){
    int a,b,c,d,e,f;

    printf("ingrese valor a\n");
    scanf("%d", &a);
    printf("ingrese valor b\n");
    scanf("%d", &b);
    printf("ingrese valor c\n");
    scanf("%d", &c);
    printf("ingrese valor d\n");
    scanf("%d", &d);
    printf("ingrese valor e\n");
    scanf("%d", &e);
    printf("ingrese valor f\n");
    scanf("%d", &f);

    int *const pa = &a;
    int *const pb = &b;
    int *const pc = &c;
    int *const pd = &d;
    int *const pe = &e;
    int *const pf = &f;
    int *const pr;

    printf("\nvalor de a=%d\n", *pa);
    printf("valor de b=%d\n", *pb);
    printf("Posicion de a=%p\n", &pa);
    printf("Posicion de b=%p\n", &pb);
    
    int suma1 = *pa + *pb;
    *pr = suma1;
    printf("Resuldato de la suma: %d\n", *pr);

    int resta1 = *pa - *pb;
    *pr = resta1;
    printf("Resuldato de la resta: %d\n", *pr);

    int multi1 = *pa * *pb;
    *pr = multi1;
    printf("Resuldato de la multiplicacion: %d\n", *pr);

    int divi = *pd / *pd;
    *pr = divi;
    printf("Resuldato de la division: %d\n\n",*pr);

    printf("valor de c=%d\n", *pc);
    printf("valor de d=%d\n", *pd);
    printf("Posicion de c=%p\n", &pc);
    printf("Posicion de d=%p\n", &pd);
    int suma2 = *pc + *pd;
    *pr = suma2;
    printf("Resuldato de la suma: %d\n", *pr);
    int resta2 = *pc - *pd;
    *pr = resta2;
    printf("Resuldato de la resta: %d\n", *pr);
    int multi2 = *pc * *pd;
    *pr = multi2;
    printf("Resuldato de la multi: %d\n", *pr);
    int divi2 = *pc / *pd;
    *pr = divi2;
    printf("Resuldato de la divi: %d\n\n", *pr);

    printf("valor de e=%d\n", *pe);
    printf("valor de f=%d\n", *pf);
    printf("Posicion de e=%p\n", &pe);
    printf("Posicion de f=%p\n", &pf);

    int suma3 = *pe + *pf;
    *pr = suma3;
    printf("Resuldato de la suma: %d\n", *pr);
    int resta3 = *pe - *pf;
    *pr = resta3;
    printf("Resuldato de la resta: %d\n", *pr);
    int multi3 = *pe * *pf;
    *pr = multi3;
    printf("Resuldato de la multi: %d\n", *pr);
    int divi3 = *pe / *pf;
    *pr = divi3;
    printf("Resuldato de la divi: %d\n\n", *pr);
    
}


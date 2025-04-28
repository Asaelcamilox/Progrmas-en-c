#include<stdio.h>
int main(){

    int opc;
    int num1, num2;
    printf("%s\n", "Selecciona una opcion:");
    printf("%s\n", "1.-sumar");
    printf("%s\n", "2.-restar");
    printf("%s\n", "3.-division");
    printf("%s\n", "4.-multiplicacion");
    scanf("%d", &opc);
    
    switch(opc){
        case 1://aqui se suma
            printf("%s\n","numero 1");
            scanf("%d", &num1);
            printf("%s\n","numero 2");
            scanf("%d", &num2);
            int suma = num1 + num2;
            printf("%s%d\n", "Resultado de la suma es de:", suma);
        break;

        case 2://resta
            printf("%s\n","numero 1");
            scanf("%d", &num1);
            printf("%s\n","numero 2");
            scanf("%d", &num2);
            int resta = num1 - num2;
            printf("%s%d\n", "Resultado de la resta es de:", resta);
        break;

        case 3://division
            printf("%s\n","numero 1");
            scanf("%d", &num1);
            printf("%s\n","numero 2");
            scanf("%d", &num2);
            int division = num1 / num2;
            printf("%s%d\n", "Resultado de la division es de:", division);
        break;

        case 4://multiplicacion
            printf("%s\n","numero 1");
            scanf("%d", &num1);
            printf("%s\n","numero 2");
            scanf("%d", &num2);
            int multiplicacion = num1 * num2;
            printf("%s%d\n", "Resultado de la multiplicacion es de:", multiplicacion);
        break;
        default:

            printf("%s\n","no ha seleccionado una opcion valida");
        break;
    }

}

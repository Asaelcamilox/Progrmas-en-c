#include <stdio.h>
int main()
{
    char nombre[50];
    printf("%s\n", "ingrese su nombre");
    scanf("%s", &nombre);
    int cal1;
    printf("%s\n", "dame calificacion 1");
    scanf("%d", &cal1);
    int cal2;
    printf("%s\n", "dame calificacion 2");
    scanf("%d", &cal2);
    int cal3;
    printf("%s\n", "dame calificacion 3");
    scanf("%d", &cal3);
    float prom;
    prom = (cal1 + cal2 + cal3) / 3;
    printf("%s\n", nombre);
    printf("%s%.2f\n", "tu promedio es:", prom);
    if (prom >= 6)
    {
        printf("%s\n", "aprobado");
    }
    else
    {
        printf("%s\n", "reporbado");
    }
}
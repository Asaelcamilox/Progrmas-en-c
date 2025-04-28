#include <math.h>
#include <stdio.h>

struct Coordenada{
    int x;
    int y;
};

int main() {
    int opc;
    printf ("%s\n", "Selecciona una opcion: ");
    printf ("%s\n", "1. Cuadrado");
    printf ("%s\n", "2. Triangulo");
    scanf ("%d", &opc);
    struct Coordenada arreglo [4];
    

    switch (opc){
        case 1: //Cuadrado
            for (int i=0; i< 4; i++){
                int posicion = i + 1;
                printf ("%s%d\n", "Ingrese cordenada x", posicion );
                scanf(" %d", &arreglo[i].x);
                printf ("%s%d\n", "Ingrese cordenada y", posicion );
                scanf(" %d", &arreglo[i].y);

            }
            float ab = sqrt( pow(arreglo[1].x-arreglo[0].x, 2) + pow (arreglo[1].y- arreglo[0].y, 2));
            float bc = sqrt( pow(arreglo[2].x-arreglo[1].x, 2) + pow (arreglo[2].y- arreglo[1].y, 2));
            float cd = sqrt( pow(arreglo[3].x-arreglo[2].x, 2) + pow (arreglo[3].y- arreglo[2].y, 2));
            float da = sqrt( pow(arreglo[0].x-arreglo[3].x, 2) + pow (arreglo[0].y- arreglo[3].y, 2));

            float perimetro = ab + bc + cd + da;
            float area = cd * bc;
            printf("%s%.2f\n", "Permimetro total:", perimetro);
            printf("%s%.2f\n", "Area:", area);
        break;

        case 2:
        
        break;

        default:
            printf("Opción no válida.\n");
            break;
    }

}
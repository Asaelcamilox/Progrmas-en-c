#include<stdio.h>// Incluimos la librería estándar de entrada y salida
#include<math.h>// Incluimos la librería para realizar operaciones matemáticas
struct Coordenadas{// Definimos una estructura llamada Coordenadas para almacenar las coordenadas de los vértices
    int x1;//varibale de x1
    int y1;//varibale de y1
    int x2;//varibale de x2
    int y2;//varibale de y2
    int x3;//varibale de x3
    int y3;//varibale de y3
    int x4;//varibale de x4
    int y4;//varibale de y4
};

int main(){// Función principal del programa
    int opc;// Variable para almacenar la opción seleccionada por el usuario
    printf("%s\n", "Selecciona una opcion:");// Mostramos el menú de selección
    printf("%s\n", "1.-cuadrado");
    printf("%s\n", "2.-triangulo");
    scanf("%d", &opc);// Leemos la opción ingresada por el usuario
    struct Coordenadas figura;// Declaramos una variable de tipo Coordenadas

    switch(opc){// Evaluamos la opción ingresada por el usuario
        case 1: 
        printf("%s\n","ha seleccionado cuadrado");  // Pedimos al usuario que ingrese las coordenadas de los cuatro vértices del cuadrado
        printf("%s", "ingrese el valor para la coordenada x1\n");//pide valor de x1
        scanf("%d", &figura.x1);//lee x1
        printf("%s", "ingrese el valor para la coordenada y1\n");//pide valor de y1
        scanf("%d", &figura.y1);//lee y1
        printf("%s", "ingrese el valor para la coordenada x2\n");//pide valor de x2
        scanf("%d", &figura.x2);//lee x2
        printf("%s", "ingrese el valor para la coordenada y2\n");//pide valor de y2
        scanf("%d", &figura.y2);//lee y2
        printf("%s", "ingrese el valor para la coordenada x3\n");//pide valor de x3
        scanf("%d", &figura.x3);//lee x3
        printf("%s", "ingrese el valor para la coordenada y3\n");//pide valor de y3
        scanf("%d", &figura.y3);//lee y3
        printf("%s", "ingrese el valor para la coordenada x4\n");//pide valor de x4
        scanf("%d", &figura.x4);//lee x4
        printf("%s", "ingrese el valor para la coordenada y4\n");//pide valor de y4
        scanf("%d", &figura.y4);//lee y4

        // Calculamos las distancias entre los puntos para determinar los lados del cuadrado
        float d1 = sqrt(pow(figura.x2 - figura.x1, 2) + pow(figura.y2 - figura.y1, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float d2 = sqrt(pow(figura.x3 - figura.x2, 2) + pow(figura.y3 - figura.y2, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float d3 = sqrt(pow(figura.x4 - figura.x3, 2) + pow(figura.y4 - figura.y3, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float d4 = sqrt(pow(figura.x1 - figura.x4, 2) + pow(figura.y1 - figura.y4, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float perimetro = d1 + d2 + d3 + d4;// Calculamos el perímetro y el área del cuadrado
        float area = d1 * d2;
        printf("Perimetro del cuadrado: %.2f\n", perimetro);// Mostramos los resultados del perimetro
        printf("Area del cuadrado del cuadrado: %.2f\n", area);// Mostramos los resultados de area
        break; //se acaba el caso

        case 2:
        printf("%s\n","ha seleccionado triangulo");//se selcciona el triangulo
         // Pedimos al usuario que ingrese las coordenadas de los tres vértices del triángulo
        printf("%s", "ingrese el valor para la coordenada x1\n");//pide valor de x1
        scanf("%d", &figura.x1);//lee x1
        printf("%s", "ingrese el valor para la coordenada y1\n");//pide valor de y1
        scanf("%d", &figura.y1);//lee y1
        printf("%s", "ingrese el valor para la coordenada x2\n");//pide valor de x2
        scanf("%d", &figura.x2);//lee x2
        printf("%s", "ingrese el valor para la coordenada y2\n");//pide valor de y2
        scanf("%d", &figura.y2);//lee y2
        printf("%s", "ingrese el valor para la coordenada x3\n");//pide valor de x3
        scanf("%d", &figura.x3);//lee x3
        printf("%s", "ingrese el valor para la coordenada y3\n");//pide valor de y3
        scanf("%d", &figura.y3);//lee y3
         // Calculamos las distancias entre los puntos para determinar los lados del triángulo
        float d1t = sqrt(pow(figura.x2 - figura.x1, 2) + pow(figura.y2 - figura.y1, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float d2t = sqrt(pow(figura.x3 - figura.x2, 2) + pow(figura.y3 - figura.y2, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float d3t = sqrt(pow(figura.x1 - figura.x3, 2) + pow(figura.y1 - figura.y3, 2));//se resta las coordenadas luego se elavan al cuadro y se saca raiz del resultado
        float perimetrot = d1t + d2t + d3t; // Calculamos el perímetro del triángulo
        float s = perimetrot / 2;// Calcular el semiperímetro
        float areat = sqrt(s * (s - d1t) * (s - d2t) * (s - d3t));// Aplicar la fórmula de Herón
        printf("Perimetro del triangulo: %.2f\n", perimetrot); // Mostramos los resultados de perimetro
        printf("Area del triangulo: %.2f\n", areat);  // Mostramos los resultados de area
        break;//acaba el caso
        default:
            printf("%s\n","no ha seleccionado una opcion valida");// Mensaje de error si la opción es inválida
        break;
    }
}

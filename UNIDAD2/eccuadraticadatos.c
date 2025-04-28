#include<stdio.h>////Incluimos la libreria para imprimir y leer
#include<math.h>//Incluimos la libreria para iealizar operaciones matematicas
#include<string.h>//Incluimos la libreria para imprimir y leer

struct Eccradratica{// Declaramos la estructura Eccradratica para representar una ecuación cuadrática
    int a;//varaible de a//
    int b;//variaible de b  //
    int c;//variable de c
    int determinante;//variable de la determinante//
    float x1;//variable de la respuesta 1
    float x2;//respuesta 2
    char soluc[30];//dicta la impresion de si tiene solucion o no
};

int main(){//funcion principal del programa
    int size;// Variable para almacenar la cantidad de ecuaciones que se ingresarán
    printf("Ingrese la cantidad de ecuaciones: \n");// Pedimos al usuario la cantidad de ecuaciones
    scanf("%d", &size);// Leemos la cantidad ingresada por el usuario
    struct Eccradratica arreglo[size];// Declaramos un arreglo de estructuras de tamaño 'size'
    for(int i = 0; i < size; i++){// Bucle para ingresar los coeficientes de cada ecuación
        printf("%s"," ingrese el valor de a:");// Pedimos el coeficiente a
        scanf("%d", &arreglo[i].a);// Leemos el valor de a
        printf("%s"," ingrese el valor de b:");// Pedimos el coeficiente b
        scanf("%d", &arreglo[i].b);// Leemos el valor de b
        printf("%s"," ingrese el valor de c:");// Pedimos el coeficiente c
        scanf("%d", &arreglo[i].c);// Leemos el valor de c
    }  

    for (int i = 0; i<size; i++){// Bucle para calcular las soluciones de cada ecuación cuadrática
        int d = (arreglo[i].b* arreglo[i].b)-(arreglo[i].a * arreglo[i].c);// Calculamos la determinante (b^2 - 4ac)
        if(d<0){// Si la determinante es menor que 0
            strcpy(arreglo[i].soluc, "no tiene solucion");// Guardamos "no tiene solucion" en el campo soluc
        }else{// Si la determinante es mayor o igual a 0
            int valx1 = ((-1)* arreglo[i].b + sqrt(d))/ 2 * arreglo[i].a;// Calculamos la primera raíz
            int valx2 = ((-1)* arreglo[i].b - sqrt(d))/ 2 * arreglo[i].a;// Calculamos la segunda raíz
            strcpy(arreglo[i].soluc, "Tiene solucion");// Guardamos "Tiene solucion" en el campo soluc
            arreglo[i].x1 = valx1;// Almacenamos la primera raíz en la estructura
            arreglo[i].x2 = valx2;// Almacenamos la segunda raíz en la estructura
        }
    }

    printf("\n--- Resultados ---\n");// Imprimimos encabezado de los resultados
    printf("%s|%s|%s|%s|%s|%s\n", "a","b", "c", "x1", "x2", "soluc");// Imprimimos los nombres de las columnas
    for (int i = 0; i < size; i++){// Bucle para imprimir los resultados de cada ecuación
        printf("\nEcuacion [%d]:\n", i);// Imprimimos el número de ecuación
        printf("%d | %d | %d | %.2f | %.2f | %s \n",
                arreglo[i].a,
                arreglo[i].b,
                arreglo[i].c,
                arreglo[i].x1,
                arreglo[i].x2,
                arreglo[i].soluc);// Imprimimos los valores de la ecuación y sus soluciones
    } 
    return  0;// Retornamos 0 indicando que el programa finalizó correctamente
}
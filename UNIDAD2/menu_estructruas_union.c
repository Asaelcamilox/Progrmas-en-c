#include<stdio.h>
#include<string.h>

#define Fila 2
#define Columna 2

typedef struct{
    char nombre[50];
    int edad;
} Perro;

typedef struct{
    char nombre[50];
    float meses;
} Gato;

typedef union{
    Perro perro;
    Gato gato;
} Dato;

typedef struct{
    Dato valor;
    int tipo;
} Celda;

int main(){
    Celda matriz[Fila][Columna];
    for(int i = 0; i < Fila; i++){
        for(int j = 0; j < Columna; j++){
            int opc = 0;
            printf("Selecciona una opcion: 1)Perro 2)Gato");
            scanf("%d", &opc);

            switch (opc){
                case 1:
                    printf("ingrese nombre del perro:");
                    char nombre[20];
                    int edad;
                    scanf("%s", nombre);
                    strcpy(matriz[i][j].valor.perro.nombre, nombre);
                    printf("ingrese edad del perro:");
                    scanf("%d", &edad);
                    matriz[i][j].valor.perro.edad = edad;
                    matriz[i][j].tipo = 1;
                break;
                    
                case 2:
                    printf("ingrese nombre del gato:");
                    char nombre2[20];
                    float meses;
                    scanf("%s", nombre2);
                    strcpy(matriz[i][j].valor.gato.nombre, nombre2);
                    printf("ingrese los meses del gato:");   
                    scanf("%f", &meses);
                    matriz[i][j].valor.gato.meses = meses;
                    matriz[i][j].tipo = 2;
                
                break;

                default:
                    printf("%s\n","no ha seleccionado una opcion valida");
                break;

            }
        }
    }

    for(int i = 0; i < Fila; i++){
        for(int j= 0; j<Columna; j++){
            printf("Celda [%d][%d]: ",i,j);
            if (matriz[i][j].tipo == 1){
                printf("Perro - Nombre: %s, Edad: %d\n",
                        matriz[i][j].valor.perro.nombre,
                        matriz[i][j].valor.perro.edad);
            }else if(matriz[i][j].tipo == 2){
                printf("Gato - Nombre: %s, meses: %.1f\n",
                        matriz[i][j].valor.gato.nombre,
                        matriz[i][j].valor.gato.meses);
            }
        }
    }
    return 0;
}
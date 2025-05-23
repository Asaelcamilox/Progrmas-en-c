#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define ARCHIVO "../4datos.csv"
#define TEMP "temp.csv"
#define MAX 100

void crear();
void leer();
void actualizar();
void eliminar();
void menu();

int main(){
    FILE *f = fopen(ARCHIVO, "r");
    if(f == NULL){
        f = fopen(ARCHIVO, "w");
        if(f != NULL){
            fprintf(f, "id,nombre, edad\n");
            fclose(f);
        }
    }else{
        fclose(f);
    }

    menu();
    return 0;
}

void menu(){
    int opcion;
    do {
        printf("\n=== CRUD con csv en c ===\n");
        printf("1. Crear registro\n");
        printf("2. Leer registro\n");
        printf("3. Actualizar registro\n");
        printf("4. Eliminar registro\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        getchar();//limpia buff

        switch(opcion){
            case 1: crear(); break;
            case 2: leer(); break;
            case 3: actualizar(); break;
            case 4: eliminar(); break;
            case 5: printf("saliendo....\n"); break;
            default: printf("opcion invalida.\n");
        }
    }while (opcion != 5);
}

void crear(){
    FILE *f = fopen(ARCHIVO, "w");
    if(f == NULL){
        perror("no se pudo abrir el archivo");
        return;
    }

    int id, edad;
    char nombre[MAX];

    printf("ingrese su id: ");
    scanf("%d", &id);
    getchar();
    printf("ingrese su nombre: ");
    fgets(nombre, MAX, stdin);
    nombre[strcspn(nombre, "\n")] = "\0";
    printf("ingrese edad: ");
    scanf("%d", &edad);

    fprintf(f, "%d,%s,%d\n", id, nombre, edad);
    fclose(f);
    printf("Registro agregado con exito.\n");
}

void leer(){
    FILE *f = fopen(ARCHIVO, "r");
    if(f == NULL){
        perror("no se pudo abrir el archivo");
        return;
    }

    char linea[100];
    printf("\n---REGISTROS---\n");
    while(fgets(linea, MAX, f)){
        printf("%s", linea);
    }

    fclose(f);
}

void actualizar(){
    int id_buscar, id, edad;
    char nombre[MAX];
    char linea[100], *token;
    int encontrado = 0;

    printf("I♂0gresa el ID a actualizar: ");
    scanf("%d", &id_buscar);
    getchar();

    FILE *f = fopen(ARCHIVO, "r");
    FILE *tmp = fopen(TEMP, "w")
    if(f == NULL || tmp == NULL){
        perror("no se pudo abrir el archivo");
        return;
    }

    while(fgets(linea, MAX, f)){
        char copia[MAX];
        strcpy(copia, linea);
        token = strtok(copia, ",");
        if(token && strcmp(token, "id")== 0){
            fputs(linea, tmp);
            continue;
        }

        id = atoi(token);
        if(id == id_buscar){
            printf("ingresar nuevo nombre: ");
            fgets(nombre, MAX, stdin);
            nombre[strcspn(nombre, "\n")] = "\0";
            printf("Ingresa nueva edad: ");
            scanf("%d", &edad);
            getchar();
            fprintf(tmp, "%d,%s,%d\n", id, nombre, edad);
            encontrado = 1;
        }else{
            fputs(linea, tmp);
        }
    }

    fclose(f);
    fclose(tmp);
    remove(ARCHIVO);
    rename(TEMP, ARCHIVO);

    if(encontrado) 
        printf("Registro actualizado.\n");
    else
        printf("ID no encontrado.\n");
}

void eliminar() {
    int id_buscar, id;
    char linea[MAX], *token;
    int encontrado = 0;
 
    printf("Ingrese el ID a eliminar: ");
    scanf("%d", &id_buscar);
    getchar();
 
    FILE *f = fopen(ARCHIVO, "r");
    FILE *tmp = fopen(TEMP, "w");
    if (f == NULL || tmp == NULL) {
        perror("No se pudo abrir archivo");
        return;
    }
 
    while (fgets(linea, MAX, f)) {
        char copia[MAX];
        strcpy(copia, linea);
        token = strtok(copia, ",");
        if (token && strcmp(token, "id") == 0) {
            fputs(linea, tmp);
            continue;
        }
 
        id = atoi(token);
        if (id == id_buscar) {
            encontrado = 1;
            continue;
        } else {
            fputs(linea, tmp);
        }
    }
 
    fclose(f);
    fclose(tmp);
    remove(ARCHIVO);
    rename(TEMP, ARCHIVO);
 
    if (encontrado)
        printf("Registro eliminado.\n");
    else
        printf("ID no encontrado.\n");
}
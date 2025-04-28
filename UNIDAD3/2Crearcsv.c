#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define Max 100

int main(){
    FILE * file;
    char nombre[Max];
    int edad;
    char pais[Max];
    int cantidad, i;

    //Abrir el archivo en modo escritura
    file = fopen("../2salida.csv", "w");
    if(file == NULL){
        perror("Error al abrir el archivo");
        return 1;
    }

    //Escrbrir encabezados
    fprintf(file, "nombre, Edad, Pais\n");

    printf("Cuantas personas quieres registrar?");
    scanf("%d", &cantidad);
    getchar();

    for(i = 0; i < cantidad; i++){
        printf("\nPersonas %d\n", i + 1);

        printf("nombre: ");
        fgets(nombre, Max, stdin);
        nombre[strcspn(nombre,"\n")] = 0;

        printf("Edad: ");
        scanf("%d", &edad);
        getchar();

        printf("Pais: ");
        fgets(pais, Max, stdin);
        pais[strcspn(pais,"\n")] = 0;

        fprintf(file, "%s, %d, %s\n", nombre, edad, pais);

    }

    fclose(file);
    printf("\nArchivo 'salida.csv' creado exitosamente.\n");

    return 0;
}

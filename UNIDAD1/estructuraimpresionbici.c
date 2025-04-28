#include <stdio.h>

struct Anio{
    int anio;
};

struct Bici{
    int ruedas;
    char color[50];
    char marca[50];
    char colorrines[50];
    char colorsilla[50];
    char tipoluz[50];
    char colorluz[50];
    int frenos;
    int cambios;
    int estrellas;
    int rin;
    struct Anio anio;
};

int main(){
    int n;

    printf("ingresar el numero de bicletas: ");
    scanf("%d", &n);
    getchar();

    struct Bici bicicleta[n];
    for(int i = 0; i < n; i++){
        printf("\nIngrese los datos de la bicicleta %d:\n", i + 1);

        printf("%s", "ruedas: ");
        scanf("%d", &bicicleta[i].ruedas);

        printf("%s", "color: ");
        scanf("%s", bicicleta[i].color);

        printf("%s", "marca: ");
        scanf("%s", bicicleta[i].marca);

        printf("%s", "color de rines: ");
        scanf("%s", bicicleta[i].colorrines);

        printf("%s", "color de silla: ");
        scanf("%s", bicicleta[i].colorsilla);

        printf("%s", "tipo de luz: ");
        scanf("%s", bicicleta[i].tipoluz);

        printf("%s", "color de luz: ");
        scanf("%s", bicicleta[i].colorluz);
        
        printf("%s", "cantidad de frenos: ");
        scanf("%d", &bicicleta[i].frenos);

        printf("%s", "cantidad de cambios: ");
        scanf("%d", &bicicleta[i].cambios);

        printf("%s", "cantidad de estrellas: ");
        scanf("%d", &bicicleta[i].estrellas);

        printf("%s", "cantidad de rines: ");
        scanf("%d", &bicicleta[i].rin);

        printf("%s", "año: ");
        scanf("%d", &bicicleta[i].anio.anio);
    }
    printf("\n%-10s | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-10s | %-10s | %-10s | %-10s | %-10s\n","ruedas", "color", "marca", "color rines", "color silla", "tipo de luz", "color de luz", "frenos", "cambios", "estrellas", "rines", "año");
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    
    for(int i = 0; i < n; i++){
        printf("\n%-10d | %-20s | %-20s | %-20s | %-20s | %-20s | %-20s | %-10d | %-10d | %-10d | %-10d | %-10d\n",
                bicicleta[i].ruedas,
                bicicleta[i].color,
                bicicleta[i].marca,
                bicicleta[i].colorrines,
                bicicleta[i].colorsilla,
                bicicleta[i].tipoluz,
                bicicleta[i].colorluz,
                bicicleta[i].frenos,
                bicicleta[i].cambios,
                bicicleta[i].estrellas,
                bicicleta[i].rin,
                bicicleta[i].anio.anio);
                
    }
    return 0;
}


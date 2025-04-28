#include<stdio.h>
int main(){
    int asteriscos = 5;//num1
    int espacios = 3;

    for(int i=3; i>= 0; i--){
        for( int j=1; j<= espacios; j++){
            printf("%4s", " ");
        }
        espacios--;
        for( int k=1; k<= asteriscos; k++ ){
            printf("%4s", "*");
        }
        asteriscos +=2;
        printf("\n");
    }

    printf("%s", "numero 2\n");
    int espacios2= 0;
    int asteriscos2= 5;
    for(int i=4; i>= 0; i--){
        for(int j=0; j < espacios2; j++){
            printf("%4s", " ");
        }
        espacios2++;
        for(int k = 1; k<= asteriscos2; k++){
            printf("%4s", "*");
        }
        asteriscos2--;
        printf("\n");
    }

    printf("%s", "numero 2\n");
    int espacios3= 0;
    int asteriscos3= 5;
    for(int i=2; i>= 0; i--){
        for(int j=0; j < espacios3; j++){
            printf("%4s", " ");
        }
        espacios3+=2;
        for(int k = 1; k<= asteriscos3; k++){
            printf("%4s", "*");
        }
        asteriscos3-=2;
        printf("\n");
    }
//PIRAMIDE INVERTIDA//
    printf("%s", "piramide invertida\n");
    int asteriscos4 = 8;
    int espacios4 = 0;
    for(int i=4; i>= 0; i--){
        for(int j = 0; j < espacios4; j++){
            printf("%4s", " ");
        }
        espacios4++;
        for(int k = 0; k <= asteriscos4; k++){
        printf("%4s", "*");
        }
        asteriscos4-=2;
        printf("\n");
    }

    printf("%s", "rombo\n");
    int espacioss = 4;
    int asteriscoss =1;
    for(int i=4; i>= 0; i--){//parte superior
        for(int j = 0; j<=espacioss; j++){
            printf("%4s", " ");
        }
        espacioss--;
        for(int k = 1; k<=asteriscoss; k++){
            printf("%4s", "*");
        }
        asteriscoss+=2;
        printf("\n");
    }
    //parte inferior
    int aste = 7;
    int espa = 1;
    for(int i=3; i>= 0; i--){
        for(int j = 0; j<=espa; j++){
            printf("%4s", " ");
        }
        espa++;
        for(int k = 1; k<=aste; k++){
            printf("%4s", "*");
        }
        aste-=2;
        printf("\n");
    }
    printf("%s", "flecha\n");
    int asteri =1;
    for(int i=4; i>= 0; i--){//parte superior
        for(int k = 1; k<=asteri; k++){
            printf("%4s", "*");
        }
        asteri++;
        printf("\n");
    }
    //parte inferior
    int aste2 = 4;
    for(int i=3; i>= 0; i--){
        for(int k = 1; k<=aste2; k++){
            printf("%4s", "*");
        }
        aste2--;
        printf("\n");
    }
    
}
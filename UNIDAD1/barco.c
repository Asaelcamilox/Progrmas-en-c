#include<stdio.h>
int main(){
    int asteriscos = 1;
    int espacios = 8;
    for(int i=4; i>= 0; i--){//parte superior//
        for(int j = 0; j<= espacios; j++){
            printf("%4s", " ");
        }
        espacios--;
        for(int k = 1; k<= asteriscos; k++){
            printf("%4s","*");
        }
        asteriscos+=2;
        printf("\n");
    }
    //parte de abajo//
    int aste = 17;
    int espa = 0;
    for(int i=3; i>= 0; i--){
        for(int j = 0; j<=espa; j++){
            printf("%4s", " ");
        }
        espa++;
        for(int k = 1; k<= aste; k++){
            printf("%4s", "*");
        }
        aste-=2;
        printf("\n");
    }
    //patas//
    int izq = 5;
    int izqespa= 3;
    int dere = 5;
    int derespa = 10;
    for(int i=4; i>= 0; i--){//espacios izquerida//
        for(int j = 0; j<=izqespa; j++){
            printf("%4s", " ");
        }
        for(int k= 0; k<= izq; k++){
            printf("%4s", "*");
        }
        izq--;
        printf("\n");
        
    }
    for(int l=4; l>= 0; l--){
        for(int m=0; m < derespa; m++){
            printf("%4s", " ");
        }
        derespa++;
        for(int n = 1; n<= dere; n++){
            printf("%4s", "*");
        }
        dere--;
        printf("\n");

    }
    
}
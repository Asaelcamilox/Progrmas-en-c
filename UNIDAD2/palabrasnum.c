#include<stdio.h>

const char* palabras(int opc){
    switch(opc){
        case 1:
            return "hola";
            
        case 2:
            return "halo deidad";
            
        case 3:
            return "i am a master pize";
            
        case 4:
            return "adios";
            
        case 5:
            return "skibidi";
            
        case 6:
            return "peru";
            
        case 7:
            return "mexico";
            
        default:
            return "no ha seleccionado una opcion valida";
            
    }

}

int main(){
    int opc;
    printf("Dame un numero\n");
    scanf("%d", &opc);
    const char* resultado = palabras(opc);
    printf("Esta es la palabra del numero:%s\n", resultado);
}
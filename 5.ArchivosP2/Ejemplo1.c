// se desea abrir un archivo de nombre licencia.ES? que no esxite
//para otener ciertos datos.
//  
#include <stdlib.h>
#include <stdio.h>

FILE *pf;
char nm[] = ".licencia.est";

int main(){
    pf = fopen(nm, "r");
    if( pf == NULL){
        puts("Error al abrir el archivo");
        exit(1);
    }
    return 0;
}

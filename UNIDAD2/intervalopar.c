#include<stdio.h>
int intervalo(int a, int b){
    int par = a;
    for(int i = a + 1; i < b; i++){
        par  = par + 1;
        if(i %2 == 0){
            printf("%d ", par);
        }else{
            printf("%s ", "*");
        }
    }

}
int main(){
    int a;
    int b;
    printf("Dame el primer numero\n");
    scanf("%d", &a);
    printf("Dame el otro numero\n");
    scanf("%d", &b);
    printf("los numeros pares dentro del intervalo son:\n");
    intervalo(a,b);
    
}
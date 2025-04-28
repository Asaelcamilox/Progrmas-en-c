#include<stdio.h>

int main(){
   
   int diagonales = 1;
   int espacios = 6;
   for (int i=6; i>= 0; i --){
       for(int j = 1; j <= espacios; j++ ){
       printf("%4s","");
       }
   espacios--;
   for(int k = 1; k <= diagonales; k++ ){
       printf("%4s","/");
   }   
   printf("\n");
   }  
   
   int diagonales2 = 1;
   int espacios2 = 0;
   for( int i = 6; i >= 0; i -- ){
    for(int j = 1; j <= espacios2; j++ ){
        printf("%4s"," ");
        }
    espacios2++;
    for(int k = 1; k <= diagonales2; k++){
        printf("%4s","/");
        }   
    printf("\n");
    }
 }   

#include<stdio.h>
int main(){


int espacios4 =3; int asteriscos4 = 3;
for(int i = 3; i >= 0 ; i--){
    for(int j = 1; j <= espacios4; j++){
    printf("%4s"," ");
}
espacios4--;
for(int k = 1; k <= asteriscos4; k++){
    printf("%4s","*");
}
asteriscos4 +=2;
printf("\n");
}
}
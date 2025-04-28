#include<stdio.h>
int main(){
    printf("%s\n", "selecciona una opcion");
    printf("%s\n", "a) programa de escapes");
    printf("%s\n", "b) programa de tipo de datos");
    printf("%s\n", "c) programa que calcula el promedio"); //ya//
    printf("%s\n", "d) programa que calcula temperatura(enteros)"); //ya//
    printf("%s\n", "e) programa que calcula temperatura(flotante)");//ya//
    printf("%s\n", "f) programa de diagonales");//ya//
    printf("%s\n", "g) aprograma que imprime el cuadro de números");//ya
    printf("%s\n", "h) programa que imprime las tablas de multiplicar");//ya
    printf("%s\n", "i) programa que imprime el cuadro de asteriscos");//ya//
    printf("%s\n", "j) triangulo 1");//ya//
    printf("%s\n", "k) triangulo 2");//ya//
    printf("%s\n", "l) triangulo equilatero");//ya//
    printf("%s\n", "m) trapecio"); //ya//
    printf("%s\n", "n) promedio con datos dados por el usuario");//ya//
    printf("%s\n", "o) volumen y area de un cono");//ya//
    printf("%s\n", "p) volumen y area de una esfera");//ya//
    printf("%s\n", "q) volumen y area de un cilindro");//ya//
    printf("%s\n", "r) ejemplo switch1");//ya//
    printf("%s\n", "s) calculadora");//ya//
    printf("%s\n", "t) ejemplo switch2");//ya//
    
    char opc;
    scanf("%c", &opc);
    switch(opc){
        case 'a': // aqui es el primer programa
            printf("%s\n", "selecciono la opc a");
            printf("\\a Alarma\n");
            printf("\\b Retroceso\n");
            printf("\\f Avance de pagina\n");
            printf("\\n Retorno de carro y avance de linea\n");
            printf("\\r Retorno de carro\n");
            printf("\\t Tabulacion\n");
            printf("\\\\ Diagonal invertida\n");
            printf("\\? Signo de interrogacion\n");
            printf("\\\" Comillas dobles\n");
            printf("\\000 Octal\n");
            printf("\\xhh Hexadecimal\n");
            printf("\\0 Caracter nulo\n");
        
        break;
        case 'b': // tipos datos
            printf("%s\n", "selecciono la opc b");
             //Tipos de datos primitivos
            printf("%s","%d Imprime datos enteros decimales: 5\n");
            printf("%s","%i Imprime datos enteros: 2\n");
            printf("%s","%o Imprime datos octales: 6\n");
            printf("%s","%x Imprime datos hexadecimales: 8A1\n");
            printf("%s","%u Imprime datos enteros sin signo en decimal: 23\n");
            printf("%s","%c Imprime datos de caracteres: #\n");
            printf("%s","%e Imprime datos reales expresados en base y exponente:5^2 \n");
            printf("%s","%f Imprime datos reales escrito con punto decimal: 23.12\n");
            printf("%s","%g Imprime datos reales : 14\n");
            printf("%s","%s Imprime cadenas de caracteres: Hola123\n");
            printf("%s","%lf Imprime datos reales de tipo long double: 2.1646466565466642\n");
        break;
        case 'c': // promedio
            printf("%s\n", "selecciono la opc c");
            int calif1 = 7;
            int calif2 = 8;
            int calif3 = 10;
            float promedio;
            promedio= (calif1 + calif2 + calif3) / 3;
            printf("%s%.2f\n", "tu promedio es:", promedio);
            
        break;
        case 'd': // aqui es el cuarto programa
            printf("%s\n", "selecciono la opc d");
            int fahr, celsius; //se declaran las variables de celuios y fahrenheit//
            int lower, upper, step;
            lower=0; //limite inferior de la tabla//
            upper=300; //imite superior de la tabla//
            step=20; //incremento//
            fahr = lower; //se dice que la variabale fahr es igual a lower//
            while (fahr<=upper) { //se igualan las variables//
                celsius = 5*(fahr-32)/9; //se haceoperacion//
                printf("%d\t%d\n",fahr, celsius); //se imprimen valores//
                fahr=fahr+step; //contador//
            }
        

        break;
        case 'e': // aqui es el quintoprograma
            printf("%s\n", "selecciono la opc e");
            float fahr2, celsius2; //se declaran las variables de celuios y fahrenheit//
            int lower2, upper2, step2;
            lower2=0; //limite inferior de la tabla//
            upper2=300; //imite superior de la tabla//
            step2=20; //incremento//
            fahr2 = lower2; //se dice que la variabale fahr es igual a lower//
            while (fahr2<=upper2) { //se igualan las variables//
                celsius2 = 5*(fahr2-32)/9; //se haceoperacion//
                printf("%.4f\t%.4f\n",fahr2, celsius2); //se imprimen valores//
                fahr2=fahr2+step2; //contador//
            }
        

        break;
        case 'f': // aqui es el sexto programa diagonales
            printf("%s\n", "selecciono la opc f");
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
        break;
        case 'g': // aqui es el septimo programa cuadro num
            printf("%s\n", "selecciono la opc g");
            int contador = 0;
            int limite = 10;
        
            printf("%4s\n","EJEMPLO DE IMPRESION");
            while(contador <= limite){
                printf("%4d", contador);
                contador ++;
             } 
             printf("\n%s\n","ejemplo de impresion"); 
        
             int limitey = 10;
             while(limitey >= 0){
                int limitex = 10;
                while(limitex >= 0){
                    printf("%4d", limitex);
                    limitex--;
                }
                printf("\n");
                limitey--;
             }
        
             printf("\n%s\n","ejemplo de impresion 0 al 10"); 
        
             int limitey2 = 0;
             while(limitey2 <= 10){
                int limitex2 = 0;
                while(limitex2 <= 10){
                    printf("%4d", limitex2);
                    limitex2++;
                }
                printf("\n");
                limitey2++;
             }
        break;
        case 'h': // aqui es el octavo programa tabla mult
            printf("%s\n", "selecciono la opc h");
            printf("\n%s\n", "tabla de multiplicacion");
            int tabla = 0;
            while(tabla<=10){
                int n = 0;
                while(n < 10){
                    int mult = n * tabla;
                    printf("%s%d%s%d%s%d\n", "(", tabla, ")(", n, ")=", mult);
                    n++;
                }
                tabla++;
                }
        break;
        case 'i': // cuadro aster
            printf("%s\n", "selecciono la opc i");
            for (int a=0;a<=9;a++){
                printf("%3s","*");
            }
            printf("\n");
            for(int b=1;b<=7;b++){
                printf("%3s","*");
        
                for (int c=1;c<=8;c++){
                    printf("%3s"," ");
                }
        
                printf("%3s","*");
                printf("\n");
        
            }
            for (int a=0;a<=9;a++){
                printf("%3s","*");
            }
        
        break;
        case 'j': // programa 10 triangulo 1
            printf("%s\n", "selecciono la opc j");
            int asteriscos = 1;
            for (int i=6; i>= 0; i --){
                for(int j = 1; j <= asteriscos; j++ ){
                    printf("%4s","*");
                }
                asteriscos++;
                printf("\n");
                }
        break;
        case 'k': // programa 11 triangulo 2
            printf("%s\n", "selecciono la opc k");
            int asteriscos2 = 1;
            int espacios3 = 6;
            for (int i=6; i>= 0; i --){
                for(int j = 1; j <= espacios3; j++ ){
                printf("%4s"," ");
                }
            espacios3--;
            for(int k = 1; k <= asteriscos2; k++ ){
                printf("%4s","*");
            }   
            asteriscos2++;
            printf("\n");
            }   
        
        break;
        case 'l': // triangulo equilatero
            printf("%s\n", "selecciono la opc l");
            int espacios4 =6; 
            int asteriscos3 = 1;
            for(int i = 6; i >= 0 ; i--){
                for(int j = 1; j <= espacios4; j++){
                printf("%4s"," ");
            }
            espacios4--;
            for(int k = 1; k <= asteriscos3; k++){
                printf("%4s","*");
            }
            asteriscos3 +=2;
            printf("\n");
            }
        

        break;
        case 'm': // programa 13 trapecio
            printf("%s\n", "selecciono la opc m");
            int espacios5 =3; int asteriscos4 = 3;
            for(int i = 3; i >= 0 ; i--){
                for(int j = 1; j <= espacios5; j++){
                printf("%4s"," ");
            }
            espacios5--;
            for(int k = 1; k <= asteriscos4; k++){
                printf("%4s","*");
            }
            asteriscos4 +=2;
            printf("\n");
            }
        
        break;
        case 'n': // aqui es el primer programa
            printf("%s\n", "selecciono la opc n");
            char nombre[50];
            printf("%s\n", "ingrese su nombre");
            scanf("%s", &nombre);
            int cal1;
            printf("%s\n", "dame calificacion 1");
            scanf("%d", &cal1);
            int cal2;
            printf("%s\n", "dame calificacion 2");
            scanf("%d", &cal2);
            int cal3;
            printf("%s\n", "dame calificacion 3");
            scanf("%d", &cal3);
            float prom;
            prom = (cal1 + cal2 + cal3) / 3;
            printf("%s\n", nombre);
            printf("%s%.2f\n", "tu promedio es:", prom);
            if (prom >= 6)
            {
                printf("%s\n", "aprobado");
            }
            else
            {
                printf("%s\n", "reporbado");
            }

        break;

        case 'o': //programa 15
            printf("%s\n", "selecciono la opc o");
            int h;
            float pi  = 3.1416;
            int r;
            float v, g;
            float abase, alateral, atotal;
        
            printf("%s\n", "Dame el radio:");
            scanf("%d",&r);
            printf("%s\n", "Dame la altura:");
            scanf("%d",&h);
        
            v = (pi*(r*r*r)*h)/3;
            printf("%s%f\n", "El volumen del cono es de:", v);
            
            g = (h * 1.1) + r;
            abase = pi * r * r;
            alateral = pi * r * g;
            atotal = abase + alateral;
            printf("%s%f","El area del cono es de:", atotal);

        break;

        case 'p': //triangulo 2//
            printf("%s\n", "selecciono la opc p");
            int r2;
            float pi2 = 3.1416;
            float v2;
            float area2;
            
            printf("%s\n", "Dame el radio:");
            scanf("%d",&r2);
        
            v2 = (4*pi2*(r2*r2*r2))/3;
            printf("%s%f\n", "El volumen de la esfera es de:", v2);
            area2 = 4*pi2*(r2*r2);
            printf("%s%f\n", "El area es de:", area2);

        break;

        case 'q': //triangulo 2//
            printf("%s\n", "selecciono la opc q");
            float r3;
            float h2;
            float pi3 = 3.1416;
            float v3;
            float area3;
             
            printf("%s\n", "Dame el radio:");
            scanf("%f",&r3);
            printf("%s\n", "Dame la altura:");
            scanf("%f",&h2);
        
            v3 = (pi3)*(r3*r3)*(h2);
            printf("%s%f\n", "el volumen del cilindro:", v3);
            area3 = ((2)*(pi3)*(r3)*(h2)) + ((2)*(pi3)*(r3*r3));
            printf("%s%f\n", "el area del cilindro es de:", area3);

        break;

        case 's'://segundo programa
            printf("%s\n", "selecciono la opc s");
           
            int opc2;
            int num1, num2;
            printf("%s\n", "Selecciona una opcion:");
            printf("%s\n", "1.-sumar");
            printf("%s\n", "2.-restar");
            printf("%s\n", "3.-division");
            printf("%s\n", "4.-multiplicacion");
            scanf("%d", &opc2);
            
            switch(opc2){
                case 1://aqui se suma
                    printf("%s\n","numero 1");
                    scanf("%d", &num1);
                    printf("%s\n","numero 2");
                    scanf("%d", &num2);
                    int suma = num1 + num2;
                    printf("%s%d\n", "Resultado de la suma es de:", suma);
                break;
        
                case 2://resta
                    printf("%s\n","numero 1");
                    scanf("%d", &num1);
                    printf("%s\n","numero 2");
                    scanf("%d", &num2);
                    int resta = num1 - num2;
                    printf("%s%d\n", "Resultado de la resta es de:", resta);
                break;
        
                case 3://division
                    printf("%s\n","numero 1");
                    scanf("%d", &num1);
                    printf("%s\n","numero 2");
                    scanf("%d", &num2);
                    int division = num1 / num2;
                    printf("%s%d\n", "Resultado de la division es de:", division);
                break;
        
                case 4://multiplicacion
                    printf("%s\n","numero 1");
                    scanf("%d", &num1);
                    printf("%s\n","numero 2");
                    scanf("%d", &num2);
                    int multiplicacion = num1 * num2;
                    printf("%s%d\n", "Resultado de la multiplicacion es de:", multiplicacion);
                break;
                default:
        
                    printf("%s\n","no ha seleccionado una opcion valida");
                break;
            }
        
        break;
        case 'r': //swich
            printf("%s\n", "selecciono la opc r");
            int opc;
            printf("%s\n", "Selecciona una opcion:");
            printf("%s\n", "1.-sumar");
            printf("%s\n", "2.-restar");
            scanf("%d", &opc);

            switch(opc){
                case 1:
                    printf("%s\n","ha seleccionado suma");
                break;
                case 2:
                    printf("%s\n","ha seleccionado resta");
                break;
                default:
                    printf("%s\n","no ha seleccionado una opcion valida");
                    break;
                }
            return 0;
        break;

        case 't'://swicth 2
        printf("%s\n", "selecciono la opc t");
        printf("%s\n", "seleccione una opcion");
        printf("%s\n", "a) Seleccionar opcion 1");
        printf("%s\n", "b) seleccionar opcion 2");
        char opc3;
        scanf("%s", &opc3);
        switch (opc3){
        case 'a':
            printf ("%s\n", "seleccione opc1");
            break;
        case 'b':
            printf("%s\n", "selecciona opc 2");
            break;
        default:
            printf("%s\n", "Opcion invalida");
            break;
        }
        return 0;

        default:
            printf("%s\n", "selecciona una opcion valida");
            
        break;
    }
}
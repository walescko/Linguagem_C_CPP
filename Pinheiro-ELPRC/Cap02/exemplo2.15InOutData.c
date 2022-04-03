#include <stdio.h>

double a, b, c;
double delta, root01, root02;

void inData(void){

    printf("\nDigite o coeficiente a: ");
    scanf("%lf", &a);
    printf("\nDigite o coeficiente b: ");
    scanf("%lf", &b);
    printf("\nDigite o coefinente c: ");
    scanf("%lf", &c);
}    

void outData(void){
    
    if (delta >= 0.0){
        printf("Raiz X1 = %f\n", root01);
        printf("Raiz X2 = %f\n", root02);
    } else {
        printf("Sem raizes reais\n");
    }
}

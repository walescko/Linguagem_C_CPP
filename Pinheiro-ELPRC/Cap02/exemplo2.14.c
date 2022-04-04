#include <stdio.h>
#include <math.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double a, b, c;
    double delta, root01, root02;
    
    printStart();
    
    printf("\nDigite o coeficiente a: ");
    scanf("%lf", &a);
    printf("\nDigite o coeficiente b: ");
    scanf("%lf", &b);
    printf("\nDigite o coefinente c: ");
    scanf("%lf", &c);
    
    delta = pow(b,2) - 4*a*c;
    
    if (delta >= 0.0){
        root01 = (-b + sqrt(delta))/(2*a);
        root02 = (-b - sqrt(delta))/(2*a);
    }

    if (delta >= 0.0){
        printf("Raiz X1 = %f\n", root01);
        printf("Raiz X2 = %f\n", root02);
    } else {
        printf("Sem raizes reais\n");
    }

    printEnd();
    
    return 0;
}
    
    

#include <stdio.h>
#include <complex.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double _Complex numberComplex = 234.45 + 2.5 *I;
    float numberA = numberComplex;
    
    printStart();
    printf("Conversão complexo em tipo real\n");
    printf("(%f + %f i) -> %f\n", creal(numberComplex), cimag(numberComplex), numberA);
    printEnd();
    
    return 0;
}

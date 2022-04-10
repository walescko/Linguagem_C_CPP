#include <stdio.h>
#include <complex.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double numberA = 234.45;
    float _Complex numberComplex = numberA;
    
    printStart();
    printf("Conversão de real em tipo complexo\n");
    printf("%f ->\n(%f + %f i)\n", numberA, creal(numberComplex), cimag(numberComplex));
    printEnd();
    
    return 0;
}

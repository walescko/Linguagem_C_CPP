#include <stdio.h>
#include <complex.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double _Complex numberComplexC = 234.45 + 2.5 *I;
    float _Complex numberComplexD = numberComplexC;
    
    printStart();
    printf("Conversão complexo em tipo complexo\n");
    printf("(%f + %f i)\n", creal(numberComplexD), cimag(numberComplexD));
    printEnd();
    
    return 0;
}

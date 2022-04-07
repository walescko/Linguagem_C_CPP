#include <stdio.h>
#include <complex.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}
void printEnd(void){
    printf("\nFim do Programa.\n");
}


int main(void){
    double _Complex a = 2.4 + 0.5*I;
    double _Complex b = 2*a;
    
    printStart();
    printf("(%f, %f i)\n", creal(a), cimag(a));
    printf("(%f, %f i)\n", creal(b), cimag(b));
    printEnd();
    
 return 0;
}

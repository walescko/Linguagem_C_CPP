#include <stdio.h>
#include <float.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double numberA = 1.00000017881393426171875;
    
    float numberB = numberA;
    float numberC = DBL_MAX;
    
    printStart();
    printf("Conversão de real de ponto flutuante para real de ponto flutuante\n");
    printf("%.25f ->\n%.25f\n", numberA, numberB);
    printf("%g -> %f\n", DBL_MAX, numberC);
    printEnd();
    
    return 0;
}

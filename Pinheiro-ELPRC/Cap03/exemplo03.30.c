#include <stdio.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    int numberA = 16777217, numberB = 16777219;
    
    float numberC = numberA;
    float numberD = numberB;
    
    printStart();
    printf("Conversão de int para signed char\n");
    printf("%f , %f\n", numberC, numberD);
    printEnd();
    
    return 0;
}

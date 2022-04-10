#include <stdio.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    int numberA = -896;
    
    signed char numberB;
    
    numberB = numberA;
    
    printStart();
    printf("Conversão de int para signed char\n");
    printf("%d -> %hhd\n", numberA, numberB);
    printEnd();
    
    return 0;
}

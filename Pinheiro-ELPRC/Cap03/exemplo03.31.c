#include <stdio.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    double numberA = 32600.234, numberB = 40000;
    
    short int numberC = numberA;
    short int numberD = numberB;
    
    printStart();
    printf("Conversão de double para short int\n");
    printf("%hd , %hd\n", numberC, numberD);
    printEnd();
    
    return 0;
}

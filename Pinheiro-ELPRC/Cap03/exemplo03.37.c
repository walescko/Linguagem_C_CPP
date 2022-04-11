#include <stdio.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    short numberA = 2;
    short int numberB;
    signed short int numberC;
    
    numberB = numberA;
    numberC = numberB;

    printStart();
    printf(" int numberA = %d\n", numberA);
    printf("short int numberB = %d\n", numberB);
    printf("signed short int numberC = %d", numberC);
    printEnd();
    
    return 0;
}

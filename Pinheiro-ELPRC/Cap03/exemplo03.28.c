#include <stdio.h>
void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}


int main(void){
    
    int numberA = 70000;
    
    short int numberB;
    
    numberB = numberA;
    
    printStart();
    printf("%d -> %hd\n", numberA, numberB);
    printEnd();
    
    return 0;
}

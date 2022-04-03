#include <stdio.h>
extern void inData(void);
extern void rootsCalc(void);
extern void outData(void);


void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
 
    printStart();
    inData();
    rootsCalc();
    outData();
    printStart();
    
    return 0;
}
    

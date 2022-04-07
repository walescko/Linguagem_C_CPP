#include <stdio.h>
#include <float.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    long double number = LDBL_MAX;
    printStart();
    printf("\nTipo Long Double: a = %Lg\n", number);
    printEnd();
    
    return 0;
}
    

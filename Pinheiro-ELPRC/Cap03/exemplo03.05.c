#include <stdio.h>
#include <limits.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    long long int number = LLONG_MAX;
    printStart();
    printf("\nTipo Inteiro long long: a = %lld\n", number);
    printEnd();
    
    return 0;
    
}

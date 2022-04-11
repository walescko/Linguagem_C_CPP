#include <stdio.h>
#include <stddef.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    size_t alinha_c = __alignof__(char);
    size_t alinha_i = __alignof__(int);
    size_t alinha_d = __alignof__(double);
    
    printStart();
    printf("Tipos definidos.\n");
    printf("char %zd \nint %zd\ndouble %zd", alinha_c, alinha_i, alinha_d);
    printEnd();
    
    
}

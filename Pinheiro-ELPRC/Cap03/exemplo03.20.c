#include <stdio.h>


void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    printStart();
    int alinha_c = __alignof__(char);
    int alinha_i = __alignof__(int);
    int alinha_d = __alignof__(double);
    printf(" char: %d bytes\n int: %d bytes\n double: %d bytes ", alinha_c, alinha_i, alinha_d);
    printEnd();
    
    return 0;
    
}

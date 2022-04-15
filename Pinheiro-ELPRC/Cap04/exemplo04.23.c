#include <stdio.h>
#include "walescko.h"
//uso indevido do qualificador const - per e sal nao inicializam
int main(void){
    
    const int per;
    float const sal, taxa = 3.2F;
    char cod;
    
    printStart();
    printf("%d %f %f %c\n", per, sal, taxa, cod);
    printEnd();
    
    return 0;
        
}

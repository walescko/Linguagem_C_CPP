#include <stdio.h>
#include "walescko.h"

#define PI (3.1415)
#define Sigla "br"

int main(void){
    #define G (9.89)
    
    printStart();
    printf("pi = %f ", 2*PI);
    printf("g = %f\n",G);
    printf("%s\n", Sigla);
    printEnd();
    
    return 0;
    
}

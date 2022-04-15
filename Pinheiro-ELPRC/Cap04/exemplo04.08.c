#include <stdio.h>
#include "walescko.h"

int main(void){
    
    char c = 'a';
    
    printStart();
    printf("%c %hhd\n", c,c);
    printEnd();
    
    return 0;
}

#include <stdio.h>
#include "walescko.h"

int main(void){
    char charA = '\u0040', charB = '\u0024';

    printStart();
    printf("%c %c\n", charA, charB);
    printEnd();

    return 0;

}

#include <stdio.h>
#include "walescko.h"

int main(void){
    int a, b, c, d;

    a = 7, b = -6;
    a = -a;
    b = +b;
    c = 2 - -2;
    d = 1 - -b;

    printStart();
    printf("%d %d %d %d\n", a , b , c, d);
    printEnd();

    return 0;
}


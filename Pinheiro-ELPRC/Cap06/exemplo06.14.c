#include <stdio.h>
#include "walescko.h"

int main(void){

    short int a, b, c;

    a = 5000;
    b = a >> 3;
    c = a >> 6;

    printStart();
    printf("%d %d %d\n", a, b, c);
    printEnd();

    return 0;
}

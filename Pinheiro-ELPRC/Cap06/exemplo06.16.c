#include <stdio.h>
#include "walescko.h"

int main(void){

    short int a = 123, b = 20;
    int c = a & b;
    int d = a | b;
    int e = a ^ b;
    int f = ~a;

    printStart();
    printf("%d %d\n", a, b);
    printf("%d %d %d %d\n", c, d, e, f);
    printEnd();

    return 0;

}

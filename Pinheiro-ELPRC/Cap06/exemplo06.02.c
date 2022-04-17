#include <stdio.h>
#include "walescko.h"

int main(void){
    int a, b, c, d;

    a = 123 - 2;
    b = 23 * 3;
    c = a / b;
    d = a % b;

    printStart();
    printf("%d %d %d %d\n", a, b, c, d);
    printEnd();

    return 0;

}

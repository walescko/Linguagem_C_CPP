#include <stdio.h>
#include "walescko.h"

int main(void){
    _Bool a, b, c, d;
    int e = 5;
    a = (2 > 3) && (++e <= 3);
    b = ( 1 == 1) || (++e <= 3);
    c = a && b;
    d = a || b;

    printStart();
    printf("%d %d %d %d %d\n", a , b, c, d, e);
    printEnd();
    return 0;

}

#include <stdio.h>
#include "walescko.h"

int main(void){

    int a =2, b = 3, c = 1, d;

    b = (a = 4, c = 2+a, 37 + c);
    d = (a + 10, 26);

    printStart();
    printf("%d %d %d %d\n", a, b, c, d);
    printEnd();

    return 0;

}


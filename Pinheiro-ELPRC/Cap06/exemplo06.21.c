#include <stdio.h>
#include "walescko.h"

int main(void){

    int a = 2, b, c;

     b = (a = 3) * 2;
     c = a + b;

    printStart();
    printf("%d %d %d\n", a, b, c);
    printEnd();

    return 0;

}


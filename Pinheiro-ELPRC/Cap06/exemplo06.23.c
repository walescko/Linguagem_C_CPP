#include <stdio.h>
#include "walescko.h"

int main(void){

    int i = 10, j = 3;

    j *= 2 + 1;
    i += 2 * (j-= 2);

    printStart();
    printf("%d %d\n", i, j);
    printEnd();

    return 0;

}


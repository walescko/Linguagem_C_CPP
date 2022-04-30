#include <stdio.h>
#include <stddef.h>
#include "walescko.h"

int main(void){

    int nums[] = {12, 3, 4};
    long int b = 1L;
    size_t t1, t2, t3, t4;

    t1 = sizeof nums/ sizeof(int);
    t2 = sizeof (2 * b++ / 1.5);
    t3 = sizeof b;
    t4 = sizeof '?';

    printStart();
    printf("%zd %zd %zd %zd\n", t1, t2, t3, t4);
    printEnd();

    return 0;

}

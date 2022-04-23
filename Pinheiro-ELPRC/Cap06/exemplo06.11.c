#include <stdio.h>
#include "walescko.h"

int main(void){

    int a, b, c = 5;

    a = (b = 3) && c++;

    printStart();
    printf("%d %d %d\n", a, b, c);
    printEnd();

    return 0;

}

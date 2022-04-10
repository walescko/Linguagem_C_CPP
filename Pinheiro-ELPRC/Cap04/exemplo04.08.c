#include <stdio.h>
#include "walescko.h"

int main(void){

    char char01 = 'a';

    printStart();
    printf("ASCII CODE:\n");
    printf("%c in ASCII code is %hhd\n", char01, char01);
    printEnd();

    return 0;
}

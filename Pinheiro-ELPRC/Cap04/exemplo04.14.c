#include <stdio.h>
#include <stddef.h>
#include "walescko.h"

int main(void){
    char charA = '\xF7';
    wchar_t charB = L'\xFFFF';

    printStart();
    printf("%c %hhd\n", charA, charB);
    printf("%c %d\n", charB, charB)
    printEnd();

    return 0;
}

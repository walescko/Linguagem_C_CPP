#include <stdio.h>
#include "walescko.h"

int main(void){
    int i = 200, j = 100, k = 2;

    printStart();
    printf("%d\n", ++i);
    printf("%d\n", i);
    printf("%d\n", j++);
    printf("%d\n", j);

    k = k + ++j + i++;
    printf("%d %d %d\n", i, j, k);
    i++; j++;
    printf("%d %d %d\n", i, j, k);

    printEnd();

    return 0;

}

#include <stdio.h>
#include "walescko.h"

int main(void){

    int ind = 12;

    printStart();
    printf("%d\n", ind);
    {
        float sal = 25.0;
        printf("%f\n", sal);
    }
    printf("%d\n", sal)//ERROR - out of scope
    printEnd();

    return 0;

}

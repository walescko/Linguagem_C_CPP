#include <stdio.h>
#include "walescko.h"

char *verso1 = "a lesma ferra a pedra";

int main(void){

    char *verso2 = "a lesma ferra a pedra";

    printStart();

    if (verso1 == verso2){
        printf("cadeias compratilhadas\n");

    }
    printEnd();
    return 0;



}

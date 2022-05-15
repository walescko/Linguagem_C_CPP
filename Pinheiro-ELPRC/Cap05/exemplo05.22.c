#include <stdio.h>
#include "walescko.h"

extern int valor = 2;
int aux = 10;

int main(void){
    printStart();
    printf("%d\n", valor);
    int valor = 4;
    printf("%d\n", valor);

    if (aux > 2){
        //extern int valor;
        printf("%d\n", valor);
    }
    printf("%d\n", valor);
    printEnd();
    return 0;

}


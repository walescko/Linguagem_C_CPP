#include <stdio.h>
#include "walescko.h"

extern int valor;
int aux = 10;
//nao rodou por falta de outro programa que chama a variaval valor
int main(void){
    printStart();
    printf("%d\n", valor);
    int valor = 4;
    printf("%d\n", valor);

    if (aux > 2){
        extern int valor;
        printf("%d\n", valor);
    }
    printf("%d\n", valor);
    printEnd();
    return 0;

}


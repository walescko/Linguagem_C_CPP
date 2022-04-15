#include <stdio.h>
#include "walescko.h"

void imprime(double a, int b);

int main(void){

    int taxa = 2, desc = taxa;
    double salario = 530.56 * taxa;

    printStart();
    imprime(salario, desc);
    printEnd();

    return 0;
}

void imprime(double sal, int tx){
    printf("%f %d\n", sal, tx);
}

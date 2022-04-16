#include <stdio.h>
#include "walescko.h"

int main(void){

    double soma = 0.0;

    printStart();

    do {
        double termo = soma;
        printf("%f\n", termo);
        soma = soma + 1.0;
        } while (soma < 15.0);

    printf("%f\n", soma);

    printEnd();
    return 0;

}

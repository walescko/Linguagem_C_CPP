#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void) {

    int number;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &number);

    switch (number*(number-1)+(number-2)) {
        case -2:
            printf("Dobro negativo\n");
            break;
        case -1:
            printf("unidade negativa\n");
            break;
        default:
            printf("valor invalido\n");
            break;
    }

    return 0;
}

#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number;

    printf("\nDigite um valor inteiro: ");
    scanf("%d", &number);

    switch (2+number) {
        case 23:
            printf("primeiro\n");
        default:
            printf("nenhum\n");
        case 5*9/3:
        case 2:
            printf("segundo\n");
        case 4:
            printf("ultimo\n");
    }

    return 0;
}

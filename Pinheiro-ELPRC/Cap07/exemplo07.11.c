#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &number);

    switch (2+number) {
        case 23:
            printf("Primeiro após 23\n");
            break;
        default:
        case 15:
        case 2:
            printf("primeiro após 2\n");
            break;
        case 4:
            printf("primeiro após 4\n");
            break;
    }
    printf("\nFim\n");
    return 0;
}

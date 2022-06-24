#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void) {

    int number;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &number);

    switch (number) {
        case 1:
            printf("rotulo 1\n");
            break;
        case 2:
            number = 3 * number;
            switch (number) {
                case 6:
                    printf("rotulo 6, apos 2\n");
                    break;
                case 8:
                    printf("rotulo 8, apos 2\n");
            }
            printf("rotulo 2\n");
            break;
        default:
            printf("rotulo default\n");
    }
    printf("fim\n");
    return 0;

}

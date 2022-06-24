#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){
    
    int a;

    printf("\nDigite um número inteiro: ");
    scanf("%d", &a);

    switch (2+a) {
        int b = 0;
        case 23:
            b=23;
            printf("primeiro apos %d\n", b);
        default:
        case 15:
        case 2:
            b = 2;
            printf("primeiro %d\n", b);
            printf("segundo apos %d\n", b);
        case 4:
            printf("primeiro apos %d\n", b);
    }

    printf("\nFim\n");
    return 0;
}

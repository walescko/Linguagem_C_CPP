#include <stdio.h>
#include "walescko.h"

int main (void){
    int a, b = 2;

    printStart();

    rot1: printf("Digite um inteiro: ");
        scanf("%d", &a);
    rot2:
    rot3:
        if (a > b){
            printf("%d > ", a); rot4: printf("%d\n", b);
        }
    printEnd();
    return 0;

}

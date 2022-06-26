#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int num;

    do {
        printf("\nDigite 0 < número < 230: ");
        scanf("%d", &num);
    } while((num <-0) || (num >=230));

    printf("\n2 x %d = %d\n", num, num*2);
    printf("fim\n");

    return 0;
}

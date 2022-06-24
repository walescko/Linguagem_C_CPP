#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number01, number02, number03;

    printf("\nDigite três números inteiros:\n");
    scanf("%d %d %d", &number01, &number02, &number03);

    printf("\nOs números são: %d, %d e %d.\n", number01, number02, number03);

    if( number01>number02)
        if (number02 > number03)
            printf("%d %d %d", number03, number02, number01);
        else if (number01 > number03)
            printf("%d %d %d", number02, number03, number01);
        else
            printf("%d %d %d", number02, number01, number03);
    else
        if(number01>number03)
            printf("%d %d %d", number03, number01, number02);
        else
            if(number02>number03)
                printf("%d %d %d", number01, number03, number02);
            else
                printf("%d %d %d", number01, number02, number03);

    printf("\nFim\n");

    return 0;
}

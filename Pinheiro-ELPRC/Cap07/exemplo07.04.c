#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number01, number02, number03;

    printf("\nDigite três números inteiros:\n");
    scanf("%d", &number01);
    scanf("%d", &number02);
    scanf("%d", &number03);

    if(number01>number02){
        printf("1\n");
    } else {
        if(number02>number03){
            printf("2\n");
        } else {
            printf("3\n");
        }
    }
    return 0;
}

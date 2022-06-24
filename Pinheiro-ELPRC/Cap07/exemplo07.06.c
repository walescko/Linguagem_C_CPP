#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number01, number02;
    printf("\nDigite dois números: ");
    scanf("%d", &number01);
    scanf("%d", &number02);

    if(number01==number02){
    } else {
        if(number01>number02){
            printf("%d\n", number01);
        } else {
            printf("%d\n", number02);
        }
    }

    return 0;
}

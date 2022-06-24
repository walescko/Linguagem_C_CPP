#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
int main(void){

    int number;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &number);
    if(number > 30){
        printf("\%d maior que 30.\n", number);
    } else {
        printf("%d menor ou igual a 30\n", number);
    }
    printf("\nfim");
    return 0;
}
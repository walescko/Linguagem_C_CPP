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
    }
    printf("%d menou ou igual a 30\n", number);

    return 0;
}

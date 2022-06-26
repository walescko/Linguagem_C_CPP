#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int soma = 0;

    for (int i = 0; i<200; i++){
        soma += i;
    }
    printf("Soma: %d\n", soma);
       
    return 0;
}
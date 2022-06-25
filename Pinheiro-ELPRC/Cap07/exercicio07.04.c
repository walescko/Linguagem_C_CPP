#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
//Faça um programa que leia um número inteiro e imprima o número lido
//se ele for maior do que 230, ou imprima 15, em caso contrario.

int main(void){

    int number;

    printf("\nDigite um valor inteiro:");
    scanf("%d", &number);

    if(number>230){
        printf("%d\n", number);
    } else {
        printf("15\n");
    }

    return 0;
}
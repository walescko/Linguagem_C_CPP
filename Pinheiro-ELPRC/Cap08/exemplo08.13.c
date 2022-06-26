#include <stdio.h>//
#include <stdbool.h>
// Created by walescko on 26/06/22.
//
int main(void){

    int n, b, soma;
    printf("\nDigite um número inteiro para efetuar as somas: ");
    scanf("%d", &n);

    while(n>0){
        soma = 1; b = 1;
        printf("%d", b++);
        while(true){
            if(b>n)
                break;
            printf(" + %d", b);
            soma += b++;

        }
        printf(" = %d\n", soma);
        n--;
    }
    return 0;
}
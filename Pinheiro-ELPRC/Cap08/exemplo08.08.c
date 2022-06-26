#include <stdio.h>
#include <stdio_ext.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int soma = 0;
    int quantidade; //quantide de números a somar
    char resposta = 's';

    do {
        printf("Até que número deseja realizar a soma? ");
        scanf("%d", &quantidade);
        __fpurge(stdin);
        for (int i = 0; i <= quantidade; i++) {
            soma += i;
        }
        printf("A soma dos primeiros números de 0 a %d é %d\n", quantidade, soma);
        printf("\nPara continuar digite 's': ");
        scanf("%c", &resposta);
    } while (resposta == 's');
    printf("\nPrograma encerrado.\n");

    return 0;
}
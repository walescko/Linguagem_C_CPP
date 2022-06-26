#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int soma = 0;
    int quantidade; //quantide de números a somar

    printf("Até que número deseja realizar a soma? ");
    scanf("%d", &quantidade);
    for (int i = 0; i<=quantidade; i++){
        soma += i;
    }
    printf("A soma dos primeiros números de 0 a %d é %d\n", quantidade, soma);

    return 0;
}
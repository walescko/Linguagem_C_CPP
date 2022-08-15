#include <stdio.h>
//
// Created by walescko on 05/08/22.
//
int main(){

    printf("\n*******************************");
    printf("\n      Jogo de Adivinhação      ");
    printf("\n*******************************\n");

    int secretNumber, readNumber, playGame;
    secretNumber= 42;
    playGame = 6;

    printf("Digite um número: ");
    scanf("%d", &readNumber);
    printf("O número digitado foi %d", readNumber);

    if (secretNumber == readNumber){
        printf("Você acertou o número!\n");
        printf("O número secreto é %d!\n", secretNumber);
    } else {
        printf("Você errou o número!\n");
        printf("Tente Novamente.");
    }



    return 0;
}

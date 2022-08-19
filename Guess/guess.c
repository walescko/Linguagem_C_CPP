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

    int i;
    while (i < playGame) {
        printf("Digite um número: ");
        scanf("%d", &readNumber);
        printf("O número digitado foi %d.\n", readNumber);

        if (secretNumber == readNumber) {
            printf("Você acertou o número!\n");
            printf("O número secreto é %d!\n", secretNumber);
            break;
        } else {
            printf("Você errou o número!\n");
            printf("Tente Novamente.\n");
            if (readNumber < secretNumber){
                printf("Dica: O número é maior.\n");
            } else {
                printf("Dica: O número é menor.\n");
            }
        }
        i++;
    }

    return 0;
}

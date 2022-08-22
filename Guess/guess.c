#include <stdio.h>
#include <stdio_ext.h>
#define PLAY_COUNT 3;

//
// Created by walescko on 05/08/22.
//
int main(){

    printf("\n*******************************");
    printf("\n      Jogo de Adivinhação      ");
    printf("\n*******************************\n");

    int secretNumber, readNumber;
    char escolha = 's';
    secretNumber= 42;



    do {
        int i;
        for(int i = 0; i <= PLAY_COUNT; i++){

            printf("Digite um número: ");
            scanf("%d", &readNumber);
            printf("O número digitado foi %d.\n", readNumber);
            int correct = readNumber == secretNumber;
            if (correct) {
                printf("Você acertou o número!\n");
                printf("O número secreto é %d!\n", secretNumber);
                break;
            } else {
                printf("Você errou o número!\n");
                printf("Tente Novamente.\n");
                int menor = readNumber < secretNumber;
                if (menor){
                    printf("Dica: O número é maior.\n");
                } else {
                    printf("Dica: O número é menor.\n");
                }
            }
        }
        __fpurge(stdin);
        printf("Para continuar digite 's': ");
        scanf("%c", &escolha);
    } while(escolha == 's');

    return 0;
}

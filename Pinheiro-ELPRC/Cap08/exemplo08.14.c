#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int num, soma, qtd = 0;

    while(qtd<6){
        printf("Digite um numero par > 0: ");
        scanf("%d", &num);
        if ((num%2) !=0 || (num <=0))
            continue;
        qtd++; soma = 0;
        for (int i = 1; i <= num; i++)
            soma += i;
        printf("x = %d, s(x) = %d\n", num, soma);
    }

    printf("\nFim\n");
    return 0;
}

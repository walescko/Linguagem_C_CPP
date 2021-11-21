/*Código do programa da página 18
 *Elementos de Programação em C
 * Capítulo 2 - Compilaçãp e Visão Preliminar dos Programas C
 * Esse programa lê dois números inteiros e imorime o maior deles.*/
#include <stdio.h>
int main(void){
    int x, y;
    printf("Digite o primeiro número: ");
    scanf("%d",&x);
    printf("Digite o segundo número: ");
    scanf("%d",&y);
    printf("\nO maior dos dois número é ");
    if (x > y) {
        printf("%d\n", x);
    } else {
        printf("%d\n",y);
    }
    return 0;
}

/*Exemplo 2.12 do livro Elementos de Programação em C de
Francisco Pinheiro - Editora Bookman
Esse programa mostra a criação de sub_rotinas na linguagem C
O programa lê um número 'x' e apresenta na tela o dobro desse número. */
#include <stdio.h>
void imp_ini(void){
    printf("Impressão do Cabeçalho\n");
}
void imp_fim(void){
    printf("Fim do programa\n");
}
int main (void){
    int x;
    imp_ini();
    printf("Entre com um valor: ");
    scanf("%d", &x);
    printf("O dobro do número %d é %d\n", x, 2*x);
    imp_fim();
    return 0;
}
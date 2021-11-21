/* Código do programa da página 22
livro Elementos de programação em C do Francisco Pinheiro - ed. Bookman
Programa com duas rotinas: para leitura de dados e outra rotina para execução de dados.
Esse programa mostra o uso de variáveis globais. */
#include <stdio.h>
int x; //variável global
void lerdados(void){ //rotina de leitura de dados
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);
}
void impdados(void){
    printf("O dobro = %d\n", (2*x));
}
//na sequencia o programa principal
int main(void){
    lerdados();
    impdados();
    printf("Fim do programa\n");
    return 0;
}
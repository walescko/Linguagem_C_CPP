#include <stdio.h>
#include<stdlib.h>
//
// Created by walescko on 28/06/22.
//
const char *aloca_linha(int);

int main(void){

    const char *linha;
    linha = aloca_linha(80);
    printf("linha alocada = %s", linha);
    return 0;
}

const char *aloca_linha(int qtd){

    char *lin = (char *) malloc(qtd*sizeof(char));
    lin = fgets(lin, qtd, stdin);
    return lin;
}

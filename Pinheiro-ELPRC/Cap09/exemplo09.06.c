#include <stdio.h>
//
// Created by walescko on 01/07/22.
//
int obtem_num(int inf, int sup){
    int num;
    printf("Digite um número entre %d e %d: ", inf, sup);
    scanf("%d", &num);
    return verifica_num(num, inf, sup);
}

int verifica_num(int num, int inf, int sup){
    if((num > inf) && (num < sup)){
        return num;
    } else {
        return obtem_num(inf, sup);
    }
}

int main(void){
    int n = obtem_num(10, 35);
    printf("numero lido %d\n", n);
    return 0;
}
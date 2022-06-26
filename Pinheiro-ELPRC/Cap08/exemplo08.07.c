#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int num;
    long long int fat = 1LL;

    do{
        printf("\nDigite um número >= 0: ");
        scanf("%d", &num);

    } while (num<0);

    while (num>1){
        fat = fat *num--;
    }
    printf("\nFatorial = %11d\n", fat);

    return 0;
}
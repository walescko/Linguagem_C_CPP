#include <stdio.h>
//
// Created by walescko on 25/06/22.
//
int main(void){
    int qtd = 1;
    while(qtd <= 1500){
        printf("1/%d ", ++qtd);
    }
    printf("\nFim\n");
    return 0;
}

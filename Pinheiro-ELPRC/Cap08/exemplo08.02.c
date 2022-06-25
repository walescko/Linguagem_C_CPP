#include <stdio.h>
//
// Created by walescko on 25/06/22.
//
int main(void){

    int qtd = 1;

    while (qtd <= 1500)
        printf("%f\n", 1.0/(++qtd));

    printf("\nFim\n");
    return 0;
}

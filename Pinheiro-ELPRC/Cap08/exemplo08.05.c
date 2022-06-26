#include <stdio.h>
//
// Created by walescko on 25/06/22.
//
int main(void){

    int n, x, i=0;
    printf("\nDigite a quantidade de números: ");
    scanf("%d", &n);
    printf("Digite %d números pares:\n", n);
    while(i<n){
        x=1;
        while((x%2)!=0){
            printf("Numero  %d: ", i+1);
            scanf("%d", &x);
        }
        i++;
    }
    return 0;
}

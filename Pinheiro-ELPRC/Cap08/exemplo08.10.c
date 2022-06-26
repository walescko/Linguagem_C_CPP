#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int num;
    long fat;

    printf("\nDigite um número >= 0: ");
    for (scanf("%d", &num); num < 0;printf("\nDigite um número >=0: "), scanf("%d", num)){}
    for (fat = 1L; num > 1; num--){
        fat = fat*num;
    }
    printf("Fatorial = %ld\n", fat);
    return 0;
}
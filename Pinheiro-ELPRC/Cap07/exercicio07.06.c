#include <stdio.h>
#include <math.h>
//
// Created by walescko on 24/06/22.
//
//Faça um programa que leia três números reais positivos
////e imprima o literal "Não forma triângulo", se os números lidos
//não correspondem aos lados de um triângulo; ou "triangulo isoceles",
//se correspondem aos lados de um triângulo; ou "triangulo equilatero",
//se correspondem aos lados de um triângulo equilátero; ou "triângulo escaleno",
//se corrrespondem aos lados de um triângulo escaleno. Se os três lados forem
//iguais, apenas a mensagem "triângulo equilatero" deve ser impressa.
int main(void){

    int a, b, c;

    printf("\nDigite três valores inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    if(a<b+c && b<a+c && c<a+b){
        if(a==b && b==c){
            printf("Triangulo equilátero\n");
        } else {
            if (a == b || c == a || b == c) {
                printf("\nForma um triângulo.\nUm triângulo isóceles");
            } else {
                printf("\nForma um triângulo.\nUm triângulo escaleno.");
            }
        }

    } else {
        printf("\nNão formam um triângulo");
    }
    return 0;
}

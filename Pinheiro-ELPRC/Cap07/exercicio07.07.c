#include <stdio.h>
//
// Created by walescko on 24/06/22.
//
//Faça um programa que leia 6 números reais x1,y1, x2,y2 e x3,y3,
//correspondentes dois a dois às coordenadas dos pontos X1, X2 e X3.
//O seu programa deve imprimir "pontos colineares", se os pontos
//pertencerem a uma mesma reta,, ou "pontos não colineares", em caso contrário.
int main(void) {

    double x1, x2, x3, y1, y2, y3;
    double determinante;

    printf("\nEntre com os valores de cada um dos pontos:\n");
    printf("Primeiro ponto: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Segundo ponto: ");
    scanf("%lf %lf", &x2, &y2);
    printf("Terceiro ponto: ");
    scanf("%lf %lf", &x3, &y3);

    determinante = (x1*y2 + y2*x2 + x2*y3) - (y2*x3 + x1*y3 + y1*x2);

    if(determinante==0){
        printf("\nOs pontos são colineares.\n");
    } else {
        printf("\nOs pontos não são colineares.\n");
    }
    return 0;
}

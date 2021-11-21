/*Código do programa 2.10 da página 19
 * Livro Elementos de Programação em C
 * Esse programa lê dois valores a e b da função do I grau e calcula a raiz da equação ax+b=0 */
#include <stdio.h>
int main(void){
    double a,b;
    printf("\nSolução de Equação do I Grau ax + b = 0\n");
    printf("Entre com o valor do coeficiente a da equação: ");
    scanf("%lf", &a);
    printf("Entre com o valor do coeficiente b da equação: ");
    scanf("%lf", &b);
    printf("Equação: %fx + %f = 0\n", a,b);
    if (a == 0.0){
        printf("Não existe raiz.\n");
    } else {
        printf("Raiz = %f \n", (-b/a));
    }
    return 0;
}    

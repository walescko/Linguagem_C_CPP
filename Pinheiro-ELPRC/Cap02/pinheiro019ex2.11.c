/* Exemplo das páginas 19 e 20 do livro
Elemento de Programação em C do Francisco Pinheiro
Esse programa lê um número 'x' e retorna a raiz quadrada 
e a terceira potência. */
#include <stdio.h>
#include <math.h>
int main (void){
    double x, r, p;
    printf("Entre com um valor: ");
    scanf("%lf", &x);
    r = sqrt(x);
    p = pow(x,3);
    printf("Raiz Quadrada de %f é %f\n", x,r);
    printf("O cubo de %f é %f\n", x, p);
    return 0;
}
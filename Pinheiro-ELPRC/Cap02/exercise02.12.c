#include <stdio.h>

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    int number01, number02;
    int product;
    
    printStart();
    
    printf("Entre com o primeiro valor: ");
    scanf("%d", &number01);
    printf("Entre com o segundo valor: ");
    scanf("%d",&number02);
    
    product = number01 * number02;
    
    printf("\nRestulado: %d * %d = %d", number01, number02, product);
    
    return 0;
    
    
    
}


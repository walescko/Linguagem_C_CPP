#include <stdio.h>

int number01, number02;

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

void enterData(void){
    printf("Entre com o primeiro valor: ");
    scanf("%d", &number01);
    printf("Entre com o segundo valor: ");
    scanf("%d",&number02);
}    

void calculusData(void){
    
    int product;
    product = number01 * number02;
    printf("\nResultado: %d * %d = %d", number01, number02, product);
}

int main(void){
    
    printStart();
    enterData();
    calculusData();
    printEnd();
        
    return 0;
}


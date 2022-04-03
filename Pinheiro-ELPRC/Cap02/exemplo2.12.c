#include <stdio.h>

void imp_ini(void){
    printf("\nWadaJu Software Inc.\n");
}

void imp_end(void){
    printf("\nFim do Programa.\n");
}

int main(void){
    
    int numero;
    
    imp_ini();
    printf("\nEntre com um numero: ");
    scanf("%d", &numero);
    
    printf("O dobro de %d eh %d\n", numero, (2*numero));
    imp_end();
    
    return 0;
    
}

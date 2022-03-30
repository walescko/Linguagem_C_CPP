#include <stdio.h>

int main (){
    int qtd = 2, taxa;
    double salario;
    
    printf("\nInforme a Quantidade: ");
    scanf("%d", &qtd);
    printf("\nInforme a taxa: ");
    scanf("%d", &taxa);
    printf("\nInforme Salario: ");
    scanf("%lf", &salario);
    
    printf("\n\nQuantidade: %d;\nTaxa: %d;\nSalario: R$ %.2lf\n", qtd, taxa, salario);
    
    return 0;
    
}

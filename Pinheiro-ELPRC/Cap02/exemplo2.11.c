#include <stdio.h>
#include <math.h>

int main (void){
    
    double numero, potencia, raiz;
    
    printf("\nEntre com um valor: ");
    scanf("%lf", &numero);
    raiz = sqrt(numero);
    potencia = pow(numero, 3);
    
    printf("Raiz de %.2f = %.2f\n", numero, raiz);
    printf("Cubo de %.2f = %.2f\n", numero, potencia);
    
    return 0;
}

#include <stdio.h>

double base, heigth;

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

void enterData(void){
    printf("Entre com o valor da base do retângulo: ");
    scanf("%lf", &base);
    printf("Entre com a altura do retângulo: ");
    scanf("%lf",&heigth);
}    

void calculusPerimeter(void){
    
    double perimeter;
    perimeter = 2*base + 2*heigth;
    printf("\nPerimetro: %.2lf", perimeter);
}
void calculusArea(void){
    
    double area;
    area = base*heigth;
    printf("\nArea: %.2lf", area);
}


int main(void){
    
    printStart();
    enterData();
    printf("O retangulo de base %.2lf e altura %.2lf tem:", base, heigth); 
    calculusPerimeter();
    calculusArea();
    printEnd();
        
    return 0;
}


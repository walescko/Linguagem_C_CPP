#include <stdio.h>
#include <math.h>
#define PI 3.1416;

float radius;

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

void enterData(void){
    printf("Entre com o valor do raio do circulo: ");
    scanf("%f", &radius);
}    

void calculusPerimeter(void){
    
    float perimeter;
    perimeter = 2*radius*PI 
    printf("\nPerimetro: %.2f", perimeter);
}
void calculusArea(void){
    
    float area;
    area = pow(radius,2)*PI;
    printf("\nArea: %.2f", area);
}

void exitData(void){
    printf("O circulo de raio %.2f", radius); 
    calculusPerimeter();
    calculusArea();
}
    
    
int main(void){
    
    printStart();
    enterData();
    exitData();
    printEnd();
        
    return 0;
}


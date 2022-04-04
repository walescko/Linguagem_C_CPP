#include <stdio.h>
#include <math.h>
#define PI 3.1416;

double radius;

void printStart(void){
    printf("\nWadaJu Software Inc.\n");
}

void printEnd(void){
    printf("\nFim do Programa.\n");
}

void enterData(void){
    printf("Entre com o valor do raio do circulo: ");
    scanf("%lf", &radius);
}    

void calculusPerimeter(void){
    
    double perimeter;
    perimeter = 2*PI*radius;
    printf("\nPerimetro: %.2lf", perimeter);
}
void calculusArea(void){
    
    double area;
    area = 2*PI*pow(radius,2);
    printf("\nArea: %.2lf", area);
}

void exitData(void){
    printf("O circulo de raio %.2lf e altura %.2lf tem:", radius); 
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


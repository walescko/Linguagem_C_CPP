#include <stdio.h>

int number;

void readdata(void){

    printf("\nDigite um valor inteiro: ");
    scanf("%d",&number);
}

void printdata(void){
    
    int dobro;
    dobro = number*2;
    printf("\nO dobro de %d é %d.\n", number, dobro);
}

int main(void){
    
    readdata();
    printdata();
    printf("\nFim do programa\nWadaJu Software\n");
    
    return 0;

}
    

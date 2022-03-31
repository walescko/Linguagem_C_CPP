#include <stdio.h>
int main (void){
    
    int x, y;
    
    printf("Digite o primeiro valor: ");
    scanf("%d", &x);
    printf("Digite o segundo valor: ");
    scanf("%d", &y);
    
    printf("O maior numero digitado foi ");
    if (x > y){
        printf("%d.\n", x);
    } else {
        printf("%d.\n", y);
    }
    
    return 0;

    
}

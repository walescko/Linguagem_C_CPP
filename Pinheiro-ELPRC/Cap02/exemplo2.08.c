#include <stdio.h>

int main (void) {
    int x, y;
    
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &x);
    printf("\nDigite o segundo valor: ");
    scanf("%d", &y);
    
    printf("\nSoma = %d", x + y);
    printf("\n%d + %d = %d\n", x, y, x+y);
    
    return 0;
    
}
    

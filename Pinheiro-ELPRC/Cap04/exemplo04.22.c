#include <stdio.h>
#include "walescko.h"

int main(void){
    
    enum letras_ini {a,b};
    enum letras_fim {x = 230, y};
    enum letras_ini cod = b;
    enum letras_ini aux = a;
    enum letras_fim taxa = y, qtd = taxa;
    
    printStart();
    printf("%d %d %d %d\n", cod, aux,qtd, taxa);
    printEnd();
    
    return 0;
    
}

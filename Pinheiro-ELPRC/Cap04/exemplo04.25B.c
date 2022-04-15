#include <stdio.h>
#include "walescko.h"

int main(void){
    
    _Bool res;
    int num;
    
    printStart();
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    res = num > 4;
    if (res == 1) {
        printf("num > 4\n");
    }
    printEnd();
    
    return 0;
}

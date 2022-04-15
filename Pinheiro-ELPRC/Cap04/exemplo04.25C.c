#include <stdio.h>
#include <stdbool.h>
#include "walescko.h"

int main(void){
    
    _Bool res;
    int num;
    
    printStart();
    printf("Entre com um valor inteiro: ");
    scanf("%d", &num);
    res = num > 4;
    if (res == true) {
        printf("num > 4\n");
    }
    printEnd();
    
    return 0;
}

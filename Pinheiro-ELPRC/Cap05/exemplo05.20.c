#include <stdio.h>
#include "walescko.h"

int *lit1 = (int[]){1 , 2, 3};

int main(void){

    int x;

    printStart();
    printf("Entre com um valor inteiro: ");
    scanf("%d\n", &x);

    int *lit2 = (int[3]){1+x, 2, 3};

    const int lit3 = (const int){851};
    const int lit4 = (const int){851};

    if (lit3 == lit4){
        printf("literais compartilhados\n");
    }

    printEnd();

    return 0;
//esse código tem algo que não consegui identicar
}

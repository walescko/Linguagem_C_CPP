#include <stdio.h>
//
// Created by walescko on 25/06/22.
//
int main(void){

    int num = 0;
    while ((num>=0) && (num<=230)){
        printf("Digite 0 < numero < 230: ");
        scanf("%d", &num);
        printf("2 x %d = %d\n", num, num*2);
    }

    printf("\nfim\n");
    return 0;
}

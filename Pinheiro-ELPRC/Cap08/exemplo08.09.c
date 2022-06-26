#include <stdio.h>
//
// Created by walescko on 26/06/22.
//
int main(void){

    int n;

    for(n=1; n<1350; n++){
        if((n%2)==0){
            printf("%f ", 1.0/(n/2));
        } else {
            printf("%f ", 2.0/(n/2 +1));
        }
    }

    return 0;
}
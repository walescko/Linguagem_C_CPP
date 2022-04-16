#include <stdio.h>

int main(void){

    int aux = 25;

    if (aux > 10){
        int val = 23;
        printf("%d\n", val);
    }

    if (aux > 5){
        float val = 40.0;
        printf("%f\n", val + aux);
    }

    return 0;

}

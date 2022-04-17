#include <stdio.h>
#include <complex.h>
#include "walescko.h"

int main(void){
    double _Complex x = 2.0 + 3.0*I;
    double _Complex y = 5.0 + 4.0*I;
    double _Complex a = x + y;
    double _Complex b = x - y;
    double _Complex c = x * y;
    double _Complex d = x / y;

    printStart();

    printf("(%f + %fi)\n", creal(a), cimag(a));
    printf("(%f + %fi)\n", creal(b), cimag(b));
    printf("(%f + %fi)\n", creal(c), cimag(c));
    printf("(%f + %fi)\n", creal(d), cimag(d));

    printEnd();

    return 0;

}

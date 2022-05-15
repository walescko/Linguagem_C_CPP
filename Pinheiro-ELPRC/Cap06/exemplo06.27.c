#include <stdio.h>
#include <math.h>

int main(void){

    int a=5, b=-6, c=1;

    double delta = pow(b,2) - 4*a*c;

    double root1 = (-b + sqrt(delta))/(2*a);
    double root2 = (-b + sqrt(delta))/(2*a);

    printf("root 1 = %f, root 2 = %f", root1, root2);

    return 0;

}
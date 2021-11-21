#include <math.h>
#include "calcula.h"
#include "ent_sai.h"

void calcula_delta(void){
    delta = pow(b, 2.0) - 4.0*a*c;
}

void calcula_raizes(void){
    calcula_delta();
    if (delta >=0){
        r1 = (-b + sqrt(delta))/(2.0*a);
        r2 = (-b - sqrt(delta))/(2.0*a);
    }
}
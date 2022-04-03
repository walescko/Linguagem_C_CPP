#include <math.h>

extern double a, b, c;
extern double delta, root01, root02;
    
void deltaCalc(void ){
    delta = pow(b,2) - 4*a*c;
}

void rootsCalc(void){
    
    deltaCalc();
    if (delta >= 0.0){
        root01 = (-b + sqrt(delta))/(2*a);
        root02 = (-b - sqrt(delta))/(2*a);
    }
}

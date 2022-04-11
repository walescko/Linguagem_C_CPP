#include <stdio.h>
#include "walescko.h"

int main(void){

char charC = '\b';//return position
int numberA = 719, numberB = 0;

printStart();
printf("%d", numberA);
printf("%c", charC);
printf("%c", charC);
printf("%d", numberB);
printEnd();
return 0;

}

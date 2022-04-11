#include <stdio.h>
#include "walescko.h"

int main(void){

char charC = '\x61';

printStart();
printf("%c in decimal code: %hhd\n", charC, charC);
printEnd();
return 0;

}

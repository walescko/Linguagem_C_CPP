#include <stdio.h>
#include "walescko.h"

int main(void){

char charC = '\141';

printStart();
printf("%c in octal code: %hhd\n", charC, charC);
printEnd();
return 0;

}

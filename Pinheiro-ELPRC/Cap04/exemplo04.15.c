#include <stdio.h>
#include "walescko.h"

int main(void){

char *verso = "bela bela "
            "\nmais que bela\n";

printStart();
printf("%s", verso);
printf("\155\141s como ");
printf("o nome del\x61\x3f");
printEnd();

return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    int a = 2, b = 3;

    a = b;
    b = a;

    printf("Valor de a: %d, e valor de b: %d", a, b);
}

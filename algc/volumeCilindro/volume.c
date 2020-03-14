#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){
    float v, r, h;

    printf("Insira o raio do cilindro:\n");
    scanf("%f", &r);

    printf("Insira o altura do cilindro:\n");
    scanf("%f", &h);

    v = 3.14159 * r * h;

    printf("\nO volume do cilindro é %f unidades de volume!\n", v);

}

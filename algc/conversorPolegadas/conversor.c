#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    float a;
    float b;


    printf("Insira o quantidade de cms:");
    scanf("%f", &b);

    a = b * 2.54;

    printf("%f cms são %f polegadas!", b, a);
}


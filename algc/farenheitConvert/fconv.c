#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float f, c;

    printf("Enter a value in farenheit to be converted in celsius:\n");
    scanf("%f", &f);

    c = ((f - 32) * 5) / 9;

    printf("\nThe value %f in celsius is equal to %f farenheit\n!", f, c);

}

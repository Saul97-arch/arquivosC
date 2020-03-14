#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Convert Celsius to Farenheit
int main(void){
    float celsius, farenheit;

    printf("Insert a value to be converted to farenheit:\n");
    scanf("%f", &celsius);

    farenheit = (9 * celsius + 160) / 5;

    printf("\n\nThe value of %f celsius is %f farenheit", celsius, farenheit);
}

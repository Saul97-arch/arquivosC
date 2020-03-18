#include <stdio.h>

int main(void){

    float multiply, pot = 1;

    for(multiply = 1; multiply <= 15; multiply++){
        //pot = pot * 3;
        pot *= 3;
        printf("%f\n", pot);
    }
}
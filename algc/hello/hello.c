#include <stdio.h> /* Standard input-output library */

int main(void){
    char nome[6] = "Saulo";
    int idade = 22;/* The C built-in data types are int, char, short, long, float, double, long double. */
    /* This is the syntax for write prhases in C, the most common placeholder are:
    %c for a char,%s for a string, %f for floating point numbers, %p for pointers*/
    printf("Olá meu nome é %s e tenho %d anos!\n", nome, idade);
    printf("This prhase is beeing displayed in the second line!");
}
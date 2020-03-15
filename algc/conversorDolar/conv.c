//Para os brasileiros que quiserem fazer uma contábilidade com o dolar!XD

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float real, dolar, valorConvertido;

printf("Insira a quantidade de dolares que você quer converter:\n");
scanf("%f", &dolar);

printf("Qual o valor de 1 dolar em real atualmente?\n");
scanf("%f", &real);

valorConvertido = real * dolar;

printf("\nVocê tem %f reais!", valorConvertido);



}

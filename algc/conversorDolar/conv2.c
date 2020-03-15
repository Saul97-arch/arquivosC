//Para os brasileiros que quiserem fazer uma contábilidade com o dolar!XD

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

float xr, vdr, vr;

printf("Qual o valor de 1 dolar em real atualmente?\n");
scanf("%f", &vdr);

printf("Quantos reais tu tem?\n");
scanf("%f", &vr);

xr = vdr * vr;

printf("\nVocê tem %f dolares!", xr);



}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float tempo, vm, distancia, litro_km, litros_usados;

    printf("\nInsira a velocidade media percorrida:\n");
    scanf("%f", &vm);

    printf("\nInsira o tempo da viagem:\n");
    scanf("%f", &tempo);

    distancia = vm * tempo;

    printf("%f",distancia);

    printf("\nSeu carro percorreu %f kilometros\n", distancia);

    printf("\n Quantos litros por km seu carro faz?\n");
    scanf("%f", &litro_km);

    litros_usados = distancia / litro_km;

    printf("\n Seu carro gasta %f por km, e consumiu %f litros de combustível!\n", litro_km, litros_usados);
}

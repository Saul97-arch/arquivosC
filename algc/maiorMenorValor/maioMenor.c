#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    int a, b, c, d, e, maior, menor;

    printf("Insira valor:\n");
    scanf("%d",&a);

    printf("Insira valor:\n");
    scanf("%d",&b);

    printf("Insira valor:\n");
    scanf("%d",&c);

    printf("Insira valor:\n");
    scanf("%d",&d);

    printf("Insira valor:\n");
    scanf("%d",&e);

    maior = a;

    if(maior < b){
        maior = b;
    }
    if(maior < c){
        maior = c;
    }
    if(maior < d){
        maior = d;
    }
    if(maior < e){
        maior = e;
    }

    menor = a;

    if(menor > b){
        menor = b;
    }
    if(menor > c){
        menor = c;
    }
    if(menor > d){
        menor = d;
    }
    if(menor > e){
        menor = e;
    }

    printf("Maior: %d  Menor: %d", maior, menor);
}

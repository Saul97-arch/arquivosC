#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    int a, b, c;

    printf("Insira valor a:\n");
    scanf("%d", &a);

    printf("Insira valor b:\n");
    scanf("%d", &b);

    printf("Insira valor c:\n");
    scanf("%d", &c);

    //Para fazer ficar decrescente coloque o sinal de menor nos if's em vez de maior
    if(a > b){
        int x = b;
        b = a;
        a = x;
    }
    if(a > c){
        int x = c;
        c = a;
        a = x;
    }
    if(b > c){
        int x = c;
        c = b;
        b = x;
    }

    printf("%d, %d, %d", a, b, c);
}

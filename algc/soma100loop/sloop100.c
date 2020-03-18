#include <stdio.h>

int main(void){
    int i, soma;

    for(i = 1; i <= 100; i++){
        soma = soma  + i;
    }
    printf("%d\n", soma);
}
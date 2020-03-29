#include <stdio.h>
#include <stdlib.h>

//Soma simples dos elementos de uma matriz, vetor, array chame como quiser XD

int main(void){

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int soma = 0;
    
    for(int i = 0; i < 10; i++){
        soma = soma + vetor[i];
    }

    printf("Soma é %d", soma);
}

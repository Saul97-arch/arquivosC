#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordemCrescente(int array[10], int n);

int main(void){
    
    int vetor[10] = {10, 4, 8, 3, 7, 2, 5, 6, 9, 1};
    int i;

    
    ordemCrescente(vetor, 10);
    
    printf("Vetor ordenado: ");
    
    for(i = 0; i < 10; i++){
        printf(" %i ", vetor[i]);
    }
    
    printf("\n");
}

void ordemCrescente(int array[10], int n){
    
    int i, j, temporaria;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(array[i] > array[j]){
                temporaria = array[i];
                array[i] = array[j];
                array[j] = temporaria;
            }
        }
    }
}

/* Link de referência do algoritmo:
https://www.youtube.com/watch?v=CbRYQ9fi4dQ&list=PLa75BYTPDNKYccxYJXaHFjwMUm02xV915&index=8 */


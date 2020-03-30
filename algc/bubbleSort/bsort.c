#include <stdio.h>

int main(){
    int vetor[6], i, j, auxiliar;

    for(j = 0; j < 6; j++){
        printf("Entre com o elemeto %d do vetor: ", j);
        scanf("%d", &vetor[j]);
    }
    printf("\n");
    printf("A orem em que você digitou é: ");

    for(j = 0; j < 6; j++){
        printf("%s %d", " ", vetor[j]);
    }
    printf("\n\n");

    //Buble Sort
    for(i = 0; i < 6; i++){
        for(j = (i + 1); j < 6; j++){
            if(vetor[i] > vetor[j]){
                auxiliar = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = auxiliar;
            }
        }
    }
    printf("\n\n");
    
    //Mostra elementos ordenados
    printf("Elementos do vetor ordenados: \n");
    for(j = 0; j < 6; j++){
        printf("%s %d"," ", vetor[j]);
    }
    printf("\n\n");

    printf("\nMairo numero do vetor: %d\n", vetor[5]);
}

/* Solução encontrada no livro Curso Básico de C de Mário Leite
Site para estudar:
https://www.geeksforgeeks.org/bubble-sort/ */

#include <stdio.h>
#include <stdlib.h>

//Gera uma matriz B em relação do que você coloca na matriz A.

int main(void){

    int vetorA[10], vetorB[10];

    for(int i = 0; i < 10; i++){
        printf("Entre com o valor na posição %d da matriz:\n", i);
        scanf("%d", &vetorA[i]);
        if(vetorA[i] % 2 == 0){
            vetorB[i] = vetorA[i];
            vetorB[i] = vetorB[i] * 5;
        }else if(vetorA[i] % 2 != 0){
            vetorB[i] = vetorA[i];
            vetorB[i] = vetorB[i] + 5;
        }
    }
    printf("\n\n");
    printf("Matriz A: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorA[i]);
    }
    printf("\n\n");
    printf("Matriz B: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", vetorB[i]);
    }
    printf("\n");
}

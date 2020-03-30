#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    
    int vetA[5] = {1, 2, 3, 4, 5}, vetB[5] = {6, 7, 8, 9, 10}, vetC[10];

    /* Copia vetor 'vetA' para a primeira metade do vetor 'vetC' */
    memcpy(vetC, vetA, sizeof(vetA));
    
    /* Copia vetor 'b' para a segunda metade do vetor 'c' */
    memcpy(vetC + 5, vetB, sizeof(vetB));

    for(int i = 0; i < 10; i++){
        int res = vetC[i];
        printf(" %d ", res);
    }
    printf("\n");
/* ------------------------------------------------------------------------------------------- */
    /* Alternativamente, você pode fazer essa união independente do tamanho dos vetores de entrada, 
    contanto que o vetor de saída tenha a soma dos tamanhos dos vetores de entrada: */
    int a[7] = { 1, 2, 3, 4, 5, 6, 7 };
    int b[3] = { 8, 9, 10 };
    int c[10];

    /* Copia vetor 'a' para a primeira porção do vetor 'c' */
    memcpy( c, a, sizeof(a) );

    /* Copia vetor 'b' para a segunda porção do vetor 'c' */
    memcpy( c + (sizeof(a)/sizeof(int)), b, sizeof(b) );
}

/* usado como refêrencia o link do stackoverflow pt, segue o link:
https://pt.stackoverflow.com/questions/311475/uni%C3%A3o-de-dois-vetores-em-c */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    int votosA, votosB, votosC, votosValidos, votosNulos, total;

    printf("Insira votos do candidato A:\n");
    scanf("%d", &votosA);

    printf("Insira votos do candidato B:\n");
    scanf("%d", &votosB);

    printf("Insira votos do candidato C:\n");
    scanf("%d", &votosC);

    if(votosA > votosB && votosA > votosC){
        printf("Candidato A venceu com %d votos!", votosA);
    }else if(votosB > votosA && votosB > votosC){
        printf("Candidato B venceu com %d votos!", votosB);
    }else if(votosC > votosA && votosC > votosB){
        printf("Candidato C venceu com %d votos!", votosC);
    }


}

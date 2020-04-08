#include <stdio.h>

/* char nomes[2][30] // Onde 2 significa a quantidade de vetores (0,1,2), e 30 significa o limite de caracteres para a string no vetor scanf(" %s", &Nome[i]);*/
int main(){
    char nomes[2][30];
    for (int i = 0; i < 3; i++)
    {
        printf("Insira um nome:\n");
        scanf("%s", nomes[i]);
    }
    printf("\n");
    printf("Nomes mostrados: ");
    for(int j = 0; j < 3; j++)
    {
        printf("%s ",nomes[j]);
    }
    printf("\n");
    return 0;
}


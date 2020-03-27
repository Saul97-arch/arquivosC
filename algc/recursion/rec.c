#include <stdio.h>

long int Fatorial(int N);

int main(void){
    long int n, r;

    printf("Insira um numero para o fatorial:\n");
    scanf("%li", &n);

    r = Fatorial(n);

    printf("\n%li\n", r);
}

//Exemplos de recursão, as variaveis delas ficam gravadas a cada chamada diferente de uma interativa
//Rever futuramente quando entrar na parte mais avançada de algoritmos

long int Fatorial(int N){
    if(N == 0){
        return 1; //caso base
    }else{
        return(N * Fatorial(N - 1));
    }
    
}

/* Links interessantes:
https://www.youtube.com/watch?v=1kBiqUCN888&list=PLa75BYTPDNKYccxYJXaHFjwMUm02xV915&index=7
https://www.youtube.com/watch?v=rDlEpT0ugy0 */

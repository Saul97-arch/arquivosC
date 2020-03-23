#include <stdio.h>

int main(void){
    
    int numero, divisor, recebeDivisor = 0, perfeito = 0;

    printf("Insira um número que você quer checar:\n");
    scanf("%d", &numero);

    for(divisor = 1; divisor < numero; divisor++){
        if(numero % divisor == 0){
            recebeDivisor = divisor;
            perfeito = perfeito + recebeDivisor;
        }
    }
    //A atrubuição para o perfeito sempre dá um número diferente quando este não é perfeito, logo fazemos
    if(perfeito != numero){
        printf("Não é número perfeito!\n");
    }else{
        printf("É número perfeito!\n");
    }
}
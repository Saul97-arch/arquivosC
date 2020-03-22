#include <stdio.h>

int main(void){
    
    int numero, divisor, n = 0;

    printf("Insira um número que você quer checar a quantidade de divisores:\n");
    scanf("%d", &numero);

    for(divisor = 1; divisor <= numero; divisor++){
        if(numero % divisor == 0){
            printf("\nO número %d é divisor do número %d!", divisor, numero);
            n++;
        }
    }
    printf("\n\nO numero %d tem %d divisores!\n", numero, n);
    }
#include <stdio.h>

int main(void){
    
    int numero, soma, j;

    
    for(numero = 0; numero < 1000; numero++){
        if(numero != 1){
            soma = 0;
            for(j = 1; j <= numero; j++){
                if(numero % j == 0){
                    soma = soma + j;
                }
            }
            soma = soma - numero;
            if(soma == numero){
                printf("%d\n", numero);
            }
        }
    }
}
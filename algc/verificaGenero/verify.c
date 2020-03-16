#include <stdlib.h>
#include <stdio.h>


int main(void){
    char sexo;

    printf("Entre com 'M' ou 'F':\n");
    scanf("%c", &sexo);

    if(sexo == 'M'){
        printf("Masculino");
    }else if(sexo == 'F'){
        printf("Feminino");
    }else{
        printf("Outro");
    }

}

/* Em suma no looping vão ser executadas três linhas de código com três varíaveis envolvolvidas respectivamente,
atual, anterior e próximo, a seguir os valores para cada iteração do loop, as três linhas de código e o valor inicial
das varíaveis estão mostrados para que você substitua os valores e acompanhe o loop em tempo real, é como se fosse
um debug só que prático, vale escrever no caderno e ir fazendo a sétima em diante pra treinar:

Primeira iteração: proximo =1, anterior = 1, atual = 1;

Segunda iteração: proximo =2, anterior = 1, atual = 2;

Terceira iteração: proximo =3, anterior = 2, atual = 3;

Quarta iteração: proximo =5, anterior = 3, atual = 5;

Quinta iteração: proximo =8, anterior = 5, atual = 8;

Sexta iteração: proximo =13, anterior = 8, atual = 13;

 */

#include <stdio.h>

int main(void){
    int atual = 1, anterior = 0, proximo = 0, limite;
    
    for(limite = 1; limite <= 15; limite++){
        printf("%d ,", atual);
        //Para se obter o proximo soma se o atual mais o anterior.
        proximo = atual + anterior;
        /* A partir do momento em que calculamos o próximo o atual já não é mais atual e sim o anterior na sequência
        posto isso atribuímos o valor do atual a varíavel anterior */
        anterior = atual;
        /* Feita esta atribuição temos que fazer a sequência andar para frente, aqui vem o pulo do gato, o atual que vai ser
        printado no console precisa ser modificado, não apenas para que seja mostrado um número diferente no console mas para que
        a operação na linha 9 faça sentido. */
        atual = proximo;
    }

}


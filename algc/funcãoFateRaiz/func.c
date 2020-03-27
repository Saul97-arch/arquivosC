#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Para compilar este programa escreva no terminal  gcc -o teste teste.c -lm
//Como a biblioteca math.h não é linkada por padrão tem que se adicionar o -lm
int CalcFat(int n);
float Raiz(float n, float raiz);

int main(void){
    float num, raiz, resRaiz;
    int fat, n;
    printf("Insira o numero do fat que você deseja:\n");
    scanf("%d", &n);
    fat = CalcFat(n);
    printf("Fatorial de %d é %d\n", n, fat);

    printf("Insira o número que você quer a raiz:\n");
    scanf("%f", &num);
    printf("Entre com o índice da raiz:\n");
    scanf("%f", &raiz);
    resRaiz = Raiz(num, raiz);
    printf("A raiz de %.0f é %f\n", num, resRaiz);
}

int CalcFat(int n){
    int j, fat;
    fat = 1;
    for(j =1; j <=n; j++){
        fat = fat * j;
    }
    return fat;
}

float Raiz(float n, float raiz){
    float res;
    res = pow(n, (1 / raiz));
    return res;
}

#include <stdio.h>

int main(void){
    float salario, porcentagem, salarioDeducao, resultadoPorcentagem, salarioLiquido;

    printf("Insira salário:\n");
    scanf("%f", &salario);

    printf("Insira porcentagem a ser deduzida:\n");
    scanf("%f", &porcentagem);

    printf("\nVocê vai deduzir %f %% do seu salário\n", porcentagem);

    resultadoPorcentagem = porcentagem / 100;
    salarioDeducao = salario * resultadoPorcentagem;
    salarioLiquido = salario - salarioDeducao;

    printf("O salario bruto é %f, o valor deduzido é %f, o valor líquido é %f", salario, salarioDeducao, salarioLiquido);
}
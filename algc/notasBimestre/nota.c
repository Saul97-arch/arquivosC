#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    float n1, n2, n3, n4, ne, md1, md2;

    printf("Isira a nota do primeiro bimestre:\n");
    scanf("%f", &n1);

    printf("Isira a nota do segundo bimestre:\n");
    scanf("%f", &n2);

    printf("Isira a nota do terceiro bimestre:\n");
    scanf("%f", &n3);

    printf("Isira a nota do quarto bimestre:\n");
    scanf("%f", &n4);

    md1 = (n1 + n2 + n3 + n4) / 4;

    if(md1 >= 7){
        printf("Aprovado!");
    }else{
        printf("\nForneça nota do do exame para podemos calcular a média de recuperação:\n");
        scanf("%f", &ne);
        md2 = md1 + ne / 2;
        if(md2 >= 5){\
            printf("Aprovado em exame!");
        }else{
            printf("Reprovado!");
        }
    }
}

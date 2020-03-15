#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void){

    float a, b, c, delta, x1, x2, xv;

    printf("Insira o coeficiente a:\n");
    scanf("%f", &a);

    printf("Insira o coeficiente b:\n");
    scanf("%f", &b);

    printf("Insira o coeficiente c:\n");
    scanf("%f", &c);

    delta = pow(b, 2) - 4 * a * c;

    if(delta < 0 || a == 0){
        printf("Não há soluções reais para a equação, ou o valor de a é 0!");
    }else if(delta > 0){
        printf("A equação terá duas resoluções reais!\n");
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        printf("x1 e x2 são respectivamente: %f e %f", x1, x2);
    }else if(delta == 0){
        xv = -b / 2 * a;
        printf("Apenas uma raiz que é: %f", xv);
    }

}

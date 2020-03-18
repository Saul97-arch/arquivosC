#include <stdio.h>

int main(void){
    float multiply = 1, base, expoente, res = 1;
    
    printf("Insira uma base:\n");
    scanf("%f", &base);

    printf("Insira um expoente:\n");
    scanf("%f", &expoente);
    
    for(multiply = 1; multiply <= expoente; multiply++){
        res = res * base;
    }
    
    printf("%f\n", res);
    
    /* while( multiply <= expoente){
        res = res * base;
        multiply = multiply + 1;
    }
    
    printf("%f", res); */
}

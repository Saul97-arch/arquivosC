#include <stdio.h>
#include <math.h>

int main(void){
    
    int i = 1, res, num;
    printf("Insira um número:\n");
    scanf("%d", &num);
    while(i <=10){
        res = num * i;
        printf("%d * %d = %d\n",num, i, res);
        i++;
    }

}
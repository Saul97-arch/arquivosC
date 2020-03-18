#include <stdio.h>
#include <math.h>

int main(void){

    int res = 0;

    for(int i = 15; i <= 200;i++){
        res = pow(i, 2);
        printf("%d\n", res);
    }
}

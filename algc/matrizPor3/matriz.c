#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    
    int a[8], b[8];

    for(int i = 0; i < 8; i++){
        printf("Insira o termo %d:\n", i);
        scanf("%d", &a[i]);
        b[i] = a[i] * 3;
    }

    printf("A matriz B :");
    for(int i = 0; i < 8; i++){
        printf(" %d ", b[i]);
    }
    printf("\n");
}
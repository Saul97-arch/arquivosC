#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    
    int a[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, b[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, c[10];

    for(int i = 0; i < 10; i++){
        c[i] = a[i] - b[i];
    }

    for(int i = 0; i < 10; i++){
        printf(" %d ", c[i]);
    }

    printf("\n");
   /*  printf("A matriz B :");
    for(int i = 0; i < 8; i++){
        printf(" %d ", b[i]);
    }
    printf("\n"); */
}
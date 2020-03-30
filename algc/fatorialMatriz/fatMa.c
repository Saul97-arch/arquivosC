#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    
    int a[5]= {1, 2, 3, 4, 5};
    int fat = 1;
    
    for(int i = 0; i < 5; i++){
        fat = fat * a[i];
        printf(" %d ", fat);
    }
}

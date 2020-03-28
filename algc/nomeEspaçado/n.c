#include <stdio.h>


int main(void){
    int a = 2, b = 5;

    char name[50]; 
    
    printf("Seu nome por favor:\n");
    fgets(name, sizeof(name), stdin);

    printf("%s\n", name);


}        
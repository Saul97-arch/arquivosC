#include <stdio.h>

int main(void){

    int a, b, c;

    printf("Insira o lado A do triângulo:\n");
    scanf("%d", &a);
    
    printf("Insira o lado B do triângulo:\n");
    scanf("%d", &b);
    
    printf("Insira o lado C do triângulo:\n");
    scanf("%d", &c);

    if(a + b > c && a + c > b && b + c > a){
        printf("Os valores inseridos são válidos para um triângulo!\n");
    }else{
        printf("Os valores inseridos não são válidos!\n");
    }
    if(a == b && a == c && b == c){
        printf("EQULILÁTERO!\n");
    }else if(a == b || a == c || b == c){
        printf("ISOCELES\n");
    }else if( a != b && a !=c && b != c){
        printf("ESCALENO\n");
    }
}

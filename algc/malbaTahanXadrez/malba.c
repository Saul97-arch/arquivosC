#include <stdio.h>

int main(void){
  float n=0;
  int v=0;

  /* A soma neste caso é feita aonde geralmente é colacado o incremento, e a condição que para o looping é enquanto n
  for maior que zero e v diferente de 64, no bloco executado temos apenas o incremento e o output, aqui vai o valor de n
  nas iterações, no caso do incremento do n = n + n ele é executado na linha 15 por isso o primeiro valor exibido é 1
  */
  for(n=1;n>=0 && v!=64;n=n+n){
    v++;
    //%.0f é nenhuma casa decimal, %.1f é com uma e assim por diante
    printf("%i° Quad. tem %.0f grãos\n",v,n );
  }
}
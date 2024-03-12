#include <stdlib.h>;
#include <stdio.h>;


int soma(){
 int indice = 13;
 int k, soma = 0;
 while(k<indice){
    k = k+1;
    soma = soma + k ;
  }
  return soma;
}

int main()
{
  printf("o retorno sera: %d", soma());
}

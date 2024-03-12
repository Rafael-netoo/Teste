#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool encontra_valor(int valor){
    bool possui = false;
    int resultado;
    if(valor==1 || valor==2|| valor == 0){
        possui = true;
    }
    else{
        int x =0,y = 1;
      while(y <= valor){
              resultado = x + y;
              if(resultado == valor){
                  possui = true;
                  break;
              }
              x = y;
              y = resultado;
          }
      }
   return possui;
    }


int main()
{   bool verifica;
    int valor;
    printf("Digite um valor para saber se esta presenta na sequencia de fibbonaci:");
    scanf("%d",&valor);
    verifica = encontra_valor(valor);
    if(verifica == true){
        printf("\n\nValor está presente na sequencia de fibbonaci");
    }
    else{
        printf("\n\nValor não está presente na sequencia de fibbonaci");
    }
}

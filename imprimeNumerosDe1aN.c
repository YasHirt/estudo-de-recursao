#include <stdio.h>

void imprimeNumerosDe1aN(int inicio, int fim);
int main(void) 
{
    int numeroInicial, numeroFinal;
    printf("Qual será o seu número inicial? ");
    scanf("%d", &numeroInicial);

    printf("Qual será o seu número final? ");
    scanf("%d", &numeroFinal);
    imprimeNumerosDe1aN(numeroInicial, numeroFinal);
    return 0;
}

void imprimeNumerosDe1aN(int inicio, int fim)
{
  if(inicio == fim + 1) return;
  else
  {
    printf("%d ", inicio);
    imprimeNumerosDe1aN(inicio + 1, fim);

  }
    
}
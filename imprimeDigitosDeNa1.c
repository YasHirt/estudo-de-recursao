#include <stdio.h>

void imprimeDigitosDeNa1(int n);
int main(void) 
{
    int numeroFinal;
    printf("Qual será seu número final? ");
    scanf("%d", &numeroFinal);

    imprimeDigitosDeNa1(numeroFinal);
    return 0;
}

void imprimeDigitosDeNa1(int n)
{
    if(n == 0) return;

    else
    {
        printf("%d ", n);
        imprimeDigitosDeNa1(n - 1);
    }
}
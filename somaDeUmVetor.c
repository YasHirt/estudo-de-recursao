#include <stdio.h>
int somaValoresDeUmVetor(int i, int numeros[]);
int main(void) 
{
    int vetorInicial[4] =  {1,2,3,4};
    printf("%d", somaValoresDeUmVetor(4, vetorInicial));
    return 0;
}

int somaValoresDeUmVetor(int i, int numeros[])
{
    if (i == 0)
    {
        return 0;
    }
    else
    {
        return numeros[i - 1] + somaValoresDeUmVetor(i - 1, numeros);
    }
}
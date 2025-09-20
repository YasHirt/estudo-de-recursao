#include <stdio.h>

int calculaTermoFibonacci(int n);
int main(void) 
{
    printf("%d", calculaTermoFibonacci(6));
    return 0;
}

int calculaTermoFibonacci(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    else
    {
        return calculaTermoFibonacci(n-1) + calculaTermoFibonacci(n-2);
    }
}
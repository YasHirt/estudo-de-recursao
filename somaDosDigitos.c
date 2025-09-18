#include <stdio.h>

int somaDosDigitosRecursiva(int n);
int main(void)
{
    int numero;
    printf("Digite um número: ");
    scanf("%d", &numero);
    printf("A soma dos digitos digitados é %d", somaDosDigitosRecursiva(numero));
}
int somaDosDigitosRecursiva(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n % 10 + somaDosDigitosRecursiva(n / 10);
    }
    
}
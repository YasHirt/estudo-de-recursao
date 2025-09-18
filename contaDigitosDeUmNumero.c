// Contar dígitos de um número
// Exemplo: contaDigitos(12345) = 5.

//Limitado a números com até 19 dígitos
#include <stdio.h>
int contaDigitosDeUmNumero(long long numero);
int main(void) 
{
    long long numero;
    printf("Digite um número: ");
    scanf("%lld", &numero);

    printf("%lld",contaDigitosDeUmNumero(numero));
    return 0;
}

int contaDigitosDeUmNumero(long long numero)
{
    if( numero == 0)
    {
        return 0;
    }
    else
    {
        return 1 + contaDigitosDeUmNumero(numero / 10);
    }
}
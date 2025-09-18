// Potenciação
// Crie uma função recursiva que calcule a^b (a elevado a b).
// Exemplo: potencia(2, 4) = 16.
#include <stdio.h>
int potenciacaoRecursiva(int a, int b);
int main(void) 
{
    int base, expoente;
    printf("Qual a base da sua potência? ");
    scanf("%d", &base);

    printf("Qual o seu expoente? ");
    scanf("%d", &expoente);

    
    printf("%d", potenciacaoRecursiva(base, expoente));
    return 0;
}

int potenciacaoRecursiva(int a, int b)
{
    if (b == 0)
    {
       return 1;
    }
    else
    {
        return a * potenciacaoRecursiva(a, b-1);
    }
    
}
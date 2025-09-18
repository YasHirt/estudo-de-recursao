#include <stdio.h>

int fatorialRecursivo(int n);

int main(void)
{
    printf("O fatorial de 6 é %d", fatorialRecursivo(6));
}

int fatorialRecursivo(int n)
{
      if (n == 0 || n == 1) {
        return 1;  // Caso base
    } else {
        return n * fatorialRecursivo(n - 1);  // Chamada recursiva
    }
    
}

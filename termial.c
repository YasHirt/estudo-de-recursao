#include <stdio.h>

int termialRecursivo(int n);
int main(void)
{
    printf("O termial de 6 é: %d", termialRecursivo(6));
}

int termialRecursivo(int n)
{
    if (n == 0)
    {
       return 0;
    }
    else
    {
        return n + termialRecursivo(n - 1);
    }
    
}
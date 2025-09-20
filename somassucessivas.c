#include <stdio.h>
int produtoSomasSucessivas(int a, int b);
int main(void) 
{
    printf("%d", produtoSomasSucessivas(2, 5));
    return 0;
}

int produtoSomasSucessivas(int a, int b)
{
    if (b ==  1)
    {
       return a;
    }
    if(b == 0)
    {
        return 0;
    }
    else
    {
        return a + produtoSomasSucessivas(a, b -1);
    }
}
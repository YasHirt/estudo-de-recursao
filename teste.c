#include <stdio.h>
void imprimeHashtag(int linha);
int main(void) 
{
   imprimeHashtag(4);
}
void imprimeHashtag(int linha)
{
    if(linha == 0) return;
    else
    {
        printf("#");
        imprimeHashtag(linha - 1);
    }
}
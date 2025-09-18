#include <stdio.h>
void criandoPiramide(int linha, int coluna);
void imprimeHashtag(int linha);
int main(void) 
{
    int linha = 1, coluna;
    printf("Qual a altura da sua pirâmide? ");
    scanf("%d", &coluna);
    criandoPiramide(linha, coluna);
    return 0;
}
void criandoPiramide(int linha, int coluna)
{
    if (linha > coluna) return;
    else
    {
        imprimeHashtag(linha);
        printf("\n");
        criandoPiramide(linha + 1, coluna);
        
    }
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
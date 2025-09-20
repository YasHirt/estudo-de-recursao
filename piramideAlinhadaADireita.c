#include <stdio.h>

void imprimeLinha(int linha, int colunas, int quantidadeDeEspacos);
void imprimeHashtag(int quantidadeDeHashtags, int linha);
void imprimePiramideAlinhadaADireita(int linha, int altura);
int main(void) 
{
    int altura;
    printf("Qual a altura da sua piramide alinhada à direita? ");
    scanf("%d", &altura);
    imprimePiramideAlinhadaADireita(1, altura );

    
    return 0;
}
/* Função Imprime Linha
    Recebe a linha que deseja imprimir,
    quantas colunas totais a pirâmide deve ter,
    e um valor de controle que deve ser sempre igual a 0
*/
void imprimeLinha(int linha, int colunas, int quantidadeDeEspacos)
{
    if (quantidadeDeEspacos + linha == colunas + 1)
    {
        imprimeHashtag(0, linha);
        return;
    }
    else
    {
        printf(" ");
        return imprimeLinha(linha, colunas, quantidadeDeEspacos + 1);
    }
}
/* Função Imprime Hashtags,
é usada dentro da função imprime linha,
a quantidade de hashtags se inicia em 0, a
linha é a linha que estamos imprimindo no momento*/
void imprimeHashtag(int quantidadeDeHashtags, int linha)
{
    if (quantidadeDeHashtags == linha)
    {
        return;
    }
    else
    {
        printf("#");
        return  imprimeHashtag(quantidadeDeHashtags + 1, linha);
    }
}
/*Funççao Imprime Pirâmide Alinhada a Direita, 
a única que de fato chamamos na Main, precisa apenas da linha  
(que sempre deve começar em 1) e da altura*/
void imprimePiramideAlinhadaADireita(int linha, int altura)
{
    if(linha > altura) return;
    else
    {
        imprimeLinha(linha, altura, 0 );
        printf("\n");
        return imprimePiramideAlinhadaADireita(linha + 1, altura);
    }
    
}
  

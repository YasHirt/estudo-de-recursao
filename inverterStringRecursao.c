#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverterString(char nome[], int quantidadeDeLetras);
int main(void) 
{
    char* palavra = malloc(100 * sizeof(char));
    printf("Qual palavra deseja inverter? ");
    scanf("%99s", palavra);
    int quantidadeDeLetras = strlen(palavra) -1;
    inverterString(palavra, quantidadeDeLetras);
    free(palavra);
    return 0;
}

void inverterString(char nome[], int quantidadeDeLetras)
{
    if (quantidadeDeLetras < 0) return;

    else
    {
        printf("%c", nome[quantidadeDeLetras]);
        inverterString(nome, quantidadeDeLetras - 1);
    }
    
}
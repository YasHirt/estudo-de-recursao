#include <stdio.h>
void print(char nome[]);
int main(void)
{
    print("Yasmin");
}
void print(char nome[])
{
    printf("%c", nome[5]);
}
/*Escreva um programa que receba duas strings e verifique se elas são
palíndromas mútuas, ou seja, se uma é igual à outra quando lida de trás para
frente. Exemplo: roma e amor são palíndromas mútuas.
*/
#include <stdio.h>
#include <string.h>

int main()
{

    char palavra1[20], palavra2[20], palavraComp[20];

    printf("Digite uma palavra:\n ");
    gets(palavra1);
    printf("digite mais uma palavra:\n ");
    gets(palavra2);

    int t = strlen(palavra2), j = 0, i;
    for (i = t - 1; i >= 0; i--, j++)
    {

        palavraComp[j] = palavra2[i];
    }

    if (strcmp(palavraComp, palavra1) == 0)
    {
        printf("As palavras sao palindromas");
    }
    else
    {
        printf("Nao nao palindromas");
    }
}

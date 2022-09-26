/*- Escreva um programa que receba 2 nomes completos (até 30 caracteres) e
imprima-os em ordem crescente.*/

#include <stdio.h>
#include <string.h>

int main(){
    char name1[30], name2[30];
    printf("Digite  o priemrio nome");
    gets(name1);
    printf("Digite  o segundo nome");
    gets(name2);

    if(strlen(name1)>strlen(name2))
        printf("%s \n %s", name2, name1);
    else
        printf("%s \n %s", name1, name2);

    
}
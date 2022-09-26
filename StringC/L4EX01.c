/*- Escreva um programa que receba uma string e depois um caractere, e retorne o
número de vezes que esse caractere aparece na string.*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char str[10];
    char caractere;
    
    printf("Digite uma frase \n");
    gets(str);
    printf("Digite o caracter que deseja descobrir quantas vezes repete\n");
    scanf(" %c", &caractere);

    int soma=0, c;
    for(c = 0; c < strlen(str); c++ )
    {

        if(str[c] == caractere) 
        soma++;
    }
    printf("%d", soma);

    

    printf("A letra %c repete %d vezes", caractere, soma);
}
/*Escreva um programa que receba uma frase e a imprima de maneira invertida,
trocando as letras C por *.
*/
#include <stdio.h>
#include <string.h>

int main(){
    char frase[60], frase2[60];
    int i;

    printf("Digite uma frase: \n");
    gets(frase);

    int j=0;
    for(i = strlen(frase) - 1; i>=0 ; i--, j++){
        frase2[j] = frase[i];
        
        if(frase2[j] == 'c'){
            frase2[j] = '*';
        }

    }
    printf("%s", frase2);
}


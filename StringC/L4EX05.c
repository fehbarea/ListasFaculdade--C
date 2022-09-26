/*Escreva um programa que receba um nome completo e apresenta a quantidade
de vogais existentes no nome.*/

#include <stdio.h>
#include <string.h>

char name[30];

int main(){
    
    printf("Digite um nome: ");
    gets(name);
    int index, control = 0;

    for(index = 0; index < strlen(name) ; index++){
        if (name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u'){
            control++;
        }
    }
    printf("A frase tem %d vogais", control);
}

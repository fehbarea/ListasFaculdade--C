/*- Escreva um programa que preencha uma matriz 4x3 (4 linhas e 3 colunas) com
valores inteiros recebidos do usuário. A função main deve chamar uma função
chamada somaMatriz que apresenta a soma de todos os elementos da matriz e
retorna o resultado da soma para a função main.*/
#include<stdio.h>
int l, c;
int SomaMatriz(int m[4][3]){
    int soma=0;
    for(l=0;l<4;l++){
        for(c=0;c<3;c++){
            soma += m[l][c];
        }
    }
    return (soma);
}
int main(){
    int  m[4][3];
    for (l=0;l<4;l++){
        for(c=0;c<3;c++){
            printf("Digite um valor para a linha: %d\t e para a coluna:%d\t", l, c);
            scanf("%d", &m[l][c]);
        }
    }
    printf("A soma de todos o numeros da matriz eh:\t%d", SomaMatriz(m));
}
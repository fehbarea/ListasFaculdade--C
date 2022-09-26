/*- Escreva um programa que receba 10 números inteiros do usuário e os armazena
em um array unidimensional (vetor). A função main deve aceitar a entrada,
chamar uma função chamada verificaMaximo que recebe o vetor como parâmetro
e retorna o elemento máximo no vetor, apresentando esse elemento ao usuário.
*/
#include<stdio.h>
int verificaMaximo(int mat[10]){
    int maximo,i;
    maximo=mat[0];
    for(i=0;i<10;i++){
        if(mat[i]>maximo){
            maximo=mat[i];
        }
    }
    return (maximo);
}
int main(){
    int mat[10], i;
    for(i=0;i<10;i++){
        printf("Digite o valor %d\n", i+1);
        scanf("%d", &mat[i]);
    }
    printf("o maximo valor eh: \t %d", verificaMaximo(mat));
    
    
}
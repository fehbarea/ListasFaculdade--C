/*Escreva uma função C chamada calculaFatorial que recebe um valor inteiro positivo
como argumento e imprime o valor recebido (função sem retorno).*/
#include<stdio.h>
int calculafatorial(int x){
    int fatorial;
    for(fatorial= 1; x>0; x--){
        fatorial=fatorial*x;
    }
    printf("O Fatorial do numero eh %d", fatorial);
}
void main(){
    int x;
    printf("Digite um numero para descorbir um fatorial");
    scanf("%d", &x);
    calculafatorial(x);
}

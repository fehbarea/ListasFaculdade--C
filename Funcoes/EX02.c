/*Escreva uma função chamada calculaCubo que recebe um valor inteiro positivo e
retorna o valor ao cubo. Receba o valor retornado pela função main e o imprima.*/
#include<stdio.h>

int calculacubo(int x){
    int y;
    y=x*x*x;
    return (y);
}
void main(){
    int y;
    printf("escreva um valor");
    scanf("%d", &y);
    printf("o valor o cubo eh %d", calculacubo(y));
}

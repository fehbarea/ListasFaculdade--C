/*Escreva uma função C chamada maiorValor que recebe dois inteiros positivos como
argumento e retorna o maior valor recebido. Receba o valor retornado pela função main
e o imprima. Considere que o segundo valor será maior que o primeiro.*/
#include<stdio.h>
MaiorValor(int x, int y){
    if( x>y){
        return x;
        }
    else {
        return y;
    }
}
void main(){
    int X, Y;
    printf("digite o primeio valor");
    scanf("%d", &X);
    printf("Digite o segundo valor");
    scanf("%d", &Y);
    printf("maior valor eh %d", MaiorValor(X,Y));
}

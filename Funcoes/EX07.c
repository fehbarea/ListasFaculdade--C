/* Escreva uma função C chamada somaIntervalo que recebe dois números inteiros
positivos e calcula a soma de todos os números pares compreendidos no intervalo dos
números recebidos. Receba o resultado da soma na função main e o imprima.*/
#include<stdio.h>
int SomaIntervalo(int v1, int v2){
    int soma = 0,i;
    if(v1>v2)
    {
        for(i=v1-1; i>v2; i--)
        {
            if(i%2==0)
            {
                soma=soma+i;
            }
        }
    }
    else if(v1<v2)
    {
        for(i= v1+1; i < v2 ;i++)
        {
            if(i%2==0)
            {
                soma= soma +i;
            }
        }
    }
    return(soma);
}
int main(void){
    int x, y;
    printf("Digite um valor");
    scanf("%d", &x);
    printf("digite outro valor");
    scanf("%d", &y);
    printf(" A soma dos numeros pares no intervalo eh: \n %d", SomaIntervalo(x,y));
}
/*Escreva uma função C chamada calculaDesconto e outra chamada calculaJuros.
Solicite ao usuário um valor decimal e se ele deseja oferecer desconto ou juros. Na
função calculaDesconto, retorne o valor obtido com 50% de desconto. Na função
calculaJuros, retorne o valor obtido com 50% de juros. Imprima o resultado de acordo
com a opção escolhida pelo usuário.*/
#include<stdio.h>

float calculadesconto(float x)
{
    float y;
    y=x*0.5;
    return(y);
}

float calculajuro(float x)
{
    float y;
    y=x*1,5;
    return(y);
}
void main()
{
    float x; 
    int escolha;
    printf("digite o valor");
    scanf("%f", &x);
    printf("\n 1-dar desconto \n 2- acrescentar juro\n");
    scanf("%d", &escolha);

    switch (escolha){
        
        case 1:
        printf("o valor com desconto eh %f", calculadesconto(x));
        break; 

        case 2:
        printf("o valor com juros eh %f", calculajuro(x));
        break;
        
        default:
        printf("valor invalido");
        break;
    }
}
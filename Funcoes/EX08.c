/*Escreva uma função C chamada calculaConsumo que recepbe a quantidade de essoas,
a quantidade de copos plásticos utilizados por pessoa em um dia e a quantidade de
dias. Apresente a quantidade de copos plásticos utilizados ao final de 1 dia, 7 dias, 30
dias e 365 dias.*/
#include<stdio.h>
int calculaConsumo(int pessoas, int copporpes, int dias)
{
    int mediapordia;
    mediapordia=copporpes*pessoas/dias;
    return(mediapordia);
}

int main(){
    int pes,cops, di, media;
    printf("digite a quantidade de pessoas");
    scanf("%d", &pes);
    printf("Digite a quantidade de copos por pessoa");
    scanf("%d", &cops);
    printf("Digite a quantidade de dias");
    scanf("%d", &di);
    media=calculaConsumo(pes,cops,di);
    printf("A quatidade de copos usado em um dia eh\t:%d \n A quantidade de copos usado em 7 dias; \t %d \n A quantidade de copos usada em 30 dias:\t %d \n A quantidade de copos usada em 365 dias\t %d ", media, media*7, media*30, media*365 );
}
 
/*Escreva uma função C chamada calculaFatorial que recebe um valor inteiro positivo
como argumento e retorna o fatorial desse valor. Receba o valor retornado pela função
main e o imprima.
*/
#include<stdio.h>

int calculafatorial(int x){
    int fatorial;
    for(fatorial= 1; x>0; x--){
        fatorial=fatorial*x;
    }
    return(fatorial);
}    
int main(){
    int x;
    printf("Escreva o numero pra descobrir o fatorial");
    scanf("%d", &x);
    printf("o fatorial do numero eh: \n %d", calculafatorial(x));
    return(0);
}
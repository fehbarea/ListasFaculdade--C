/*Escreva um programa que recebe 10 inteiros e os armazena em um array
unidimensional (vetor). A função main deve aceitar a entrada, chamar uma função
chamada verificaNumero (int v[], nt ni, int x), que procura x no vetor v de n
elementos. A função deve devolver como resultado o índice do elemento que é
igual a x ou -1 caso não encontre. Caso exista mais de um elemento igual a x,
devolva o índice do primeiro elemento encontrado.*/
#include<stdio.h>
int verificaNumero(int v[], int x){
    int a, y=-1;
    for(a=0;a<10;a++){
        if(x==v[a]){
            y=a;
            return(y);
            break;
        }
    }
    if(y==-1){
        return(y);
    }

}
int main(){
    int v[10], c, z;
    for(c=0; c<10;c++){
        printf("Digite o valor %d:\n", c);
        scanf("%d", &v[c]);
    }
    printf("Digite o valor que deseja econtrar:\t");
    scanf("%d", &z);
    printf("O valor:\t %d\t esta na posicao\t%d", z, verificaNumero(v, z));
    
}


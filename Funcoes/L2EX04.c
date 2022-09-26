/*Escreva um programa que preencha uma matriz 5x3 (5 linhas e 3 colunas) com
valores inteiros recebidos do usuário.nção main deve  A fuchamar oferecer as
seguintes opções ao usuário:
i. Imprimir o conteúdo de uma determinada posição da matriz. Nesse
caso, solicite o índice da linha e da coluna ao usuário;
ii. Alterar o conteúdo da matriz, dobrando o valor de cada elemento.
iii. Alterar o conteúdo da matriz, triplicando o valor de elementos com
números pares.
Escreva uma função para cada opção desejada.
*/
#include<stdio.h>
int l, c;

int imprimevalor(int mat[5][3], int x, int y){
    printf("O valor eh %d:\t", mat[x][y]);
}
int imprimematriz(int mat[5][3]){
    for (l=0; l<5; l++){
        for (c=0;c<3;c++){
            printf("%d\t", mat[l][c]);
        }
    printf("\n");
    }
}

int duplicavalor(int mat[5][3]){
    for(l=0;l<5;l++){
        for(c=0;c<3;c++){
            mat[l][c] = mat[l][c]*2;
        }
    }
}

int triplicavalor(int mat[5][3]){
    for(l=0;l<5;l++)
    {
        for(c=0;c<3;c++)
        {
            if(mat[l][c]%2==0){
                mat[l][c]*3;
            }
        }
    }
}   
int main(){
    int mat[5][3], escolhe, a, b;
    printf(" Escreva a matriz:");
    for(l=0;l<5;l++){
        for(c=0;c<3;c++){
            printf(" Digite o valor da linha:\t %d, e coluna: %d\t", l, c );
            scanf("%d", &mat[l][c]);
        }
    }
    printf("esccolha o que que fazer: \n 1-Imprimir um valor especifico da matriz\n 2- Dobrar os valores da matriz \n 3- Triplicar os valores pares\n");
    scanf("%d", &escolhe);
    
    switch (escolhe)
    {
    case 1:
        printf("Qual linha da matriz:");
        scanf("%d", &a);
        printf("Qual coluna da matriz:");
        scanf("%d", &b);
        imprimevalor (mat, a, b);
    break;
    
    case 2:
        duplicavalor(mat);
        imprimematriz (mat);
    break;
    
    case 3:
        triplicavalor (mat);
        imprimematriz (mat);
    break;

    default:
        printf("Opcao errada");
        break;
    }

}
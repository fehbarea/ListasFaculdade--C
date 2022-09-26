/*Escreva um programa que preenche dois vetores de 5 posições com valores
inteiros recebidos do usuário e utiliza uma função chamada multiplicaVetor, que
faz a multiplicação dos elementos do mesmo índice e apresenta o valor da
multiplicação.
*/
int multiplicaVetor(int mat[], int mat2[], int matmult[]){
    int x;
    for(x=0;x<5;x++){
        matmult[x]=mat[x]*mat2[x];
    }
}
int main(){
    int mat[5], mat2[5], matmult[5],  i;
    for(i=0;i<5;i++){
        printf("digite um valora para a matriz 1:\t");
        scanf("%d", &mat[i]);
        printf("digite um valor para a segunda matriz: \t");
        scanf("%d", &mat2[i]);
    }
    multiplicaVetor(mat, mat2, matmult);
    for(i=0;i<5;i++){
        printf("%d\n", matmult[i]);
    }
}

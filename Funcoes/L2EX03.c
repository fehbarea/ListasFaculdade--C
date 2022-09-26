/*- Escreva um programa que recebe a nota de 6 alunos e os armazena em um
array unidimensional (vetor). A função main deve aceitar a entrada, chamar uma
função chamada calculaMedia que calcula a média geral dos alunos e retorna
esse valor, apresentando ao usuário.
*/
float calculaMedia(float notas[6]){
    int x;
    float media=0;
    for(x= 0;x<6;x++){
        media=media+notas[x];
    }
    return (media/6);
}
int main(){
    int i;
    float notas[6];
    for(i=0;i<6;i++){
        printf("Digite a nota do aluno %d ", i+1);
        scanf("%f", &notas[i]);
    }
    printf(" A medias dos alunos eh:\t %2.f", calculaMedia(notas));
}
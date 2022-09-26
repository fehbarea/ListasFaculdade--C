/*screva uma função C chamada arredondaValor que recebe um número decimal e
arredonda para o inteiro mais próximo. Receba o valor arredondado na função main e o
imprima. Dica: utilize a função round, da biblioteca math.h.
*/
#include<stdio.h>
#include<math.h>
float arredondavalot(float x){
    return round (x);
}
void main(){
    float a;
    printf("escreva umm numero decimal");
    scanf("%f", &a);
    printf("o valor arredondao eh %.0f", arredondavalot(a));
}
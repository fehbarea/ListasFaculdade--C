/*- Escreva um programa que receba o nome de usuário e sua senha de acesso a
um sistema. Se o usuário for “maria“ e a senha “abc123“, permita o acesso. Caso
contrário, dê uma mensagem de ACESSO NEGADO.*/

#include <stdio.h>
#include <string.h>



main(){

    char clientUser[10];
    char clientPass[10];
    char pass[] = "abc123";
    char user[] = "maria";

    do{
        printf("Digite usuario : ");
        gets(clientUser);
        printf("Difite a senha: ");
        gets(clientPass);
    } while ((strcmp (user, clientUser) != 0) && (strcmp(pass, clientPass) != 0));

    printf("Acesso realizado com sucesso");

}
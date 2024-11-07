#include <stdio.h>
#include <string.h>
int main()
{
    char nome[20] = {};
    char sexo[15] = {};
    int idade;
    printf("Digite o seu nome:\n");
    gets(nome);
    printf("Digite seu sexo:\n");
    gets(sexo);
    printf("Digite a idade:\n");
    scanf("%d", &idade);
    if ( strcmp(sexo,"feminino")==0 && idade < 25)
    {
        puts(nome);
        printf("Aceita:");
    }else
    {
        printf("Nao aceita");
    }
    return 0;
}
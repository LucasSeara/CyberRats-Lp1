#include <stdio.h>
#include <string.h>
int main()
{
    char nome[10] = {};
    char sexo;
    int idade;
    char nacionalidade[20] = {};
    char estrangeiro[20] = {"estrangeiro"};
    char brasileiro[20] = {"brasileiro"};
    printf("Digite seu nome:\n");
    gets(nome);
    printf("Qual seu sexo:\n");
    scanf("%c", &sexo);
    if (sexo != 77 && sexo != 70)
    {
        printf("Sexo invalido:\n");
        return 0;
    }
    printf("Digite sua idade:\n");
    scanf("%d", &idade);
    if (idade < 0 || idade > 150)
    {
        printf("Idade invalida:\n");
        return 0;
    }
    getchar();
    printf("Digite sua nacionalidade:\n");
    gets(nacionalidade);
    if (strcmp(nacionalidade, estrangeiro) == 0 || strcmp(nacionalidade, brasileiro) == 0)
    {
        if (sexo == 77)
        {
            if (idade >= 18)
            {
                printf("%s, %s, do sexo masculino maior de idade , esta habilitado a dirigir:\n ", nome, nacionalidade);
            }
            else
            {
                printf("%s, %s, do sexo masculino menor de idade , nao esta habilitado a dirigir:\n ", nome, nacionalidade);
            }
        }
        if (sexo == 70)
        {
            if (idade >= 18)
            {
                printf("%s, %s, do sexo feminino maior de idade , esta habilitado a dirigir:\n ", nome, nacionalidade);
            }else
            {
                printf("%s, %s, do sexo feminino menor de idade , nao esta habilitado a dirigir:\n ", nome, nacionalidade);
            }
            
        }
    }

    return 0;
}
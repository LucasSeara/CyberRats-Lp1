#include <stdio.h>
#include <string.h>
typedef struct 
{
    char nome[10];
    char endereco[15];
    char telefone[15];
}pessoa;
int main()
{
    pessoa p[5];
    int i, j;
    char aux[10];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da pessoa:\n");
        scanf("%s", p[i].nome);
        printf("Digite o endereco:\n");
        scanf("%s", p[i].endereco);
        printf("Digite seu telefone:\n");
        scanf("%s", p[i].telefone);
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (strcmp(p[i].nome, p[j].nome) == -1)
            {
                strcpy(aux, p[i].nome);
                strcpy(p[i].nome, p[j].nome);
                strcpy(p[j].nome, aux);
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("pessoa %d:\n", i + 1);
        printf("%s\n", p[i].nome);
        printf("%s\n", p[i].endereco);
        printf("%s\n", p[i].telefone);
    }

    return 0;
};
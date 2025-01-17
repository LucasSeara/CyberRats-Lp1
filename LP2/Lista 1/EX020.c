#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[5][20];
    int ano[5][5];
    int duracao[5][5];
} FILMES;

typedef struct
{
    char nome[20];
    int quantidadeFilmes;
    FILMES filme;
} DIRETOR;
int main()
{
    DIRETOR diretores[5];
    int i, j;
    char buscaDiretor[20];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome do diretor:\n");
        scanf("%s", diretores[i].nome);
        printf("Digite a quantidade de filmes feitos:\n");
        scanf("%d", &diretores[i].quantidadeFilmes);
        for (j = 0; j < diretores[i].quantidadeFilmes; j++)
        {
            printf("Digite o nome do filme %d", j + 1);
            scanf("%s", diretores[i].filme.nome[i]);
            printf("Digite a duracao:\n");
            scanf("%d", &diretores[i].filme.duracao[i][j]);
            printf("Digite o ano:\n");
            scanf("%d", &diretores[i].filme.ano[i][j]);
        }
    }
    printf("Digite o nome do diretor que deseja buscar:\n");
    scanf("%s", buscaDiretor);
    while (strlen(buscaDiretor) != 0)
    {
        for (i = 0; i < 5; i++)
        {
            if (strcmp(buscaDiretor, diretores[i].nome) == 0)
            {
                printf("Nome:%s Quantidade de filmes:%d\n",
                       diretores[i].nome,
                       diretores[i].quantidadeFilmes);
                for (j = 0; j < diretores[i].quantidadeFilmes; j++)
                {
                    printf("Filme nome:%s do ano %d com duracao de %d horas\n",
                    diretores[i].filme.nome[i],
                    diretores[i].filme.ano[i][j],
                    diretores[i].filme.duracao[i][j]);
                }
            }
        }
        printf("Digite o proximo diretor:\n");
        scanf("%s",buscaDiretor);
    }

    return 0;
}
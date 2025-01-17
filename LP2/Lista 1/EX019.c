#include <stdio.h>
#include <string.h>
typedef struct
{
    char nome[25];
    int quantidade;
} INGREDIENTES;

typedef struct
{
    char nome[25];
    int quantidade;
    INGREDIENTES ingrediente;
} RECEITA;
int main()
{
    RECEITA livro[5];
    int i;
    char buscaReceita[25];
    for (i = 0; i < 5; i++)
    {
        printf("Digite o nome da receita:\n");
        scanf("%s",livro[i].nome);
        printf("Digite a quantidade de ingredientes:\n");
        scanf("%d",&livro[i].quantidade);
        printf("Digite o nome dos ingredientes:\n");
        scanf("%s",livro[i].ingrediente.nome);
        printf("Digite a quantidade desse ingrediente:\n");
        scanf("%d",&livro[i].ingrediente.quantidade);
    }
    printf("Digite a receita que deseja procurar:\n");
    scanf("%s",buscaReceita);
    while (strlen(buscaReceita)!=0)
    {
        for ( i = 0; i < 5; i++)
        {
            if (strcmp(buscaReceita,livro[i].nome)==0)
            {
                printf("Nome:%s,Quantidade de ingredientes %d \nIngredientes:%s quantidade:%d\n",livro[i].nome,
                livro[i].quantidade,
                livro[i].ingrediente.nome,
                livro[i].ingrediente.quantidade);
            }
        }
        printf("Digite o nome da receita que quer procurar:\n");
        scanf("%s",buscaReceita);   
    }
    return 0;
}
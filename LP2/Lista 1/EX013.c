#include <stdio.h>
#include <string.h>
typedef struct 
{
    char titulo[30];
    char autor[15];
    int ano;
}LIVROS;

int main()
{
    LIVROS livro[30];
    int n,i;
    char buscaLivro[30];
    printf("Digite a quantidade de livros a serem cadastrados:\n");
    scanf("%d", &n);
    for ( i = 0; i < n; i++)
    {
        printf("Digite o titulo do livro %d:\n",i+1);
        scanf("%s", livro[i].titulo);
        printf("Digite o nome do autor:\n");
        scanf("%s",livro[i].autor);
        printf("Digite o ano de lancamento do livro:\n");
        scanf("%d",&livro[i].ano);
    }
    printf("Digite o titulo do livro que deseja buscar:\n");
    scanf("%s",buscaLivro);
    for ( i = 0; i < n; i++)
    {
        if (strcmp(livro[i].titulo,buscaLivro)==0)
        {
            printf("Titulo:%s ano:%d----Autor:(%s)\n",
            livro[i].titulo,
            livro[i].ano,
            livro[i].autor);
        }
        
    }
    
    return 0;
}
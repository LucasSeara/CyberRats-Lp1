#include <stdio.h>
int main()
{
    char jogo[10][10]={};
    int linhas;
    int palitos = 0;
    int escolhaLinha;
    int quantPalitos;
    int i, j;
    int aux=0;
    printf("Digite o numero de fileiras desta partida:\n");
    scanf("%d", &linhas);
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j <= i; j++)
        {
            jogo[i][j]='*';
        }
    }
    for ( i = 0; i < linhas; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%c ",jogo[i][j]);
        }
        palitos+=j;
        printf("\n");
    }
    do
    {
        printf("Digite de qual fileira deseja remover os palitos\n");
        scanf("%d", &escolhaLinha);
        if (escolhaLinha > linhas || escolhaLinha <= 0)
        {
            printf("Numero de linhas invalido:\n");
            break;
        }
        
        for ( j = 0; j < escolhaLinha; j++)
        {
            if (jogo[escolhaLinha-1][j]=='*')
            {
                aux++;
            }
        }
        printf("Digite ate qual posicao dos palitos deseja retirar:\n");
        scanf("%d", &quantPalitos);
        if (quantPalitos>aux || quantPalitos <= 0)
        {
            printf("Quantidade invalida:\n");
            break;
        }
        for ( j = 0; j < quantPalitos; j++)
        {
            if (jogo[escolhaLinha-1][j]=='*')
            {
                jogo[escolhaLinha-1][j]='-';
                palitos--;
            }            
        }
        for ( i = 0; i < linhas; i++)
        {
        for ( j = 0; j <= i; j++)
        {
            printf("%c ",jogo[i][j]);
        }
        printf("\n");
        }
    } while (palitos > 0);
    printf("Fim de jogo:\n");
    return 0;
}
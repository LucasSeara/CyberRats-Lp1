#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[5][5] = {};
    int x, i, j,linha,coluna;
    int numeroEncontrado=0;
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j] = 1 + rand() % 100;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    printf("Digite o valor que voce quer procurar nesta matriz:\n");
    scanf("%d",&x);
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (m[i][j]==x)
            {
               linha=i;
               coluna=j; 
               numeroEncontrado++;
            }
        }
    }
    if (numeroEncontrado>0)
    {
        printf("A localizacao do numero esta na posicao [%d][%d]\n",linha,coluna);
    }else{
        printf("Numero nao encontrado\n");
    }
    return 0;
}
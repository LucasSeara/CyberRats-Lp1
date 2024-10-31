#include <stdio.h>
int main()
{
    float m[3][6] = {};
    float somaImpar = 0;
    float mediaAritmetica = 0;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Digite o valor da posicao [%d][%d] da matriz:\n", i, j);
            scanf("%f", &m[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == 1 || j == 3)
            {
                mediaAritmetica += m[i][j];
            }

            if (j % 2 == 1)
            {
                somaImpar += m[i][j];
            }
        }
    }
    printf("A soma de todos os elementos das colunas impares =%.1f\n", somaImpar);
    printf("A media aritmetica dos elementos da segunda e quarta coluna =%.1f\n", mediaAritmetica / 6);
    for (i = 0; i < 3; i++)
    {
        m[i][5]=m[i][0]+m[i][1];   
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%.1f ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
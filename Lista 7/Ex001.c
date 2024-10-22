#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int m[4][4] = {};
    int i, j;
    int cont=0;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao [%d][%d] da matriz\n", i, j);
            m[i][j] = 1 + rand() % 20;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (m[i][j]>10)
            {
                cont++;
            }
            
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    printf("Sao %d valores maiores que 10:\n",cont);
    return 0;
}
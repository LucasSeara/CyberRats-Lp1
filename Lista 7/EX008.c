#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[3][3] = {};
    int i, j;
    int soma = 0;
    srand(time(NULL));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 1 + rand() % 20;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i<j)
            {
            soma+=m[i][j];
            }
            
        }
    }
    printf("A soma dos valores acima da diagonal principal eh = %d\n",soma);
    return 0;
}
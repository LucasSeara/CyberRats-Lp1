#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[4][4] = {};
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            m[i][j] = 1 + rand() % 20;
        }
    }
    printf("Matriz original:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (i > j)
            {
                m[i][j] = 0;
            }
        }
    }
    printf("Matriz de triangulo inferior:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
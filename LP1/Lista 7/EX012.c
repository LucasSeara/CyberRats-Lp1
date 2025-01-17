#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int m[3][3] = {};
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            m[i][j] = 1 + rand() % 30;
        }
    }
    printf("Matriz original:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
    printf("Matriz transposta:\n");
    for ( j = 0; j < 3; j++)
    {
        for ( i = 0; i < 3; i++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
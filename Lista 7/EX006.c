#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int A[4][4] = {};
    int B[4][4] = {};
    int maior[4][4] = {};
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            A[i][j] = 1 + rand() % 50;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            B[i][j] = 1 + rand() % 50;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (A[i][j] >= B[i][j])
            {
                maior[i][j] = A[i][j];
            }
            else
            {
                maior[i][j] = B[i][j];
            }
        }
    }
    printf("----------------------------------------------------------------------\n");
    printf("Matriz A\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
    printf("Matriz B\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
    printf("Matriz contendo os maiores valores:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", maior[i][j]);
        }
        printf("\n");
    }
    printf("----------------------------------------------------------------------\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void produto_matriz(int A[4][6], int B[6][4])
{
    int C[4][6] = {0};
    int i, j, x;
    int aux = 0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (x = 0; x < 6; x++)
            {
                aux += A[i][x] * B[x][j];
            }
            C[i][j] = aux;
            aux = 0;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int A[4][6];
    int B[6][4];
    int i, j;
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            A[i][j] = 1 + rand() % 20;
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            B[i][j] = 1 + rand() % 20;
        }
    }
    printf("Matriz A:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    printf("Matriz B:\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }
    printf("Produto das matrizes:\n");
    produto_matriz(A, B);
    return 0;
}
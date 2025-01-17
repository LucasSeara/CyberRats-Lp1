#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_diagonal(int A[6][6])
{
    int i, j;
    int soma = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (i == j)
            {
                soma += A[i][j];
            }
        }
    }
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            if (j==6-i-1)
            {
                soma+=A[i][j];
            }
        }
    }
    return soma;
}
int main()
{
    int i, j;
    int A[6][6];
    int soma;
    srand(time(NULL));
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            A[i][j] = 1 + rand() % 20;
        }
    }
    printf("Matriz:\n");
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    soma = soma_diagonal(A);
    printf("A soma da diagonal principal + a soma da diagonal secundaria =%d", soma);
    return 0;
}
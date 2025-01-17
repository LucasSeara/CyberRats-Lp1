#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_matriz(int M[7][6])
{
    int i;
    int soma = 0;
    for (i = 0; i < 6; i++)
    {
        soma += M[4][i];
    }
    for (i = 0; i < 7; i++)
    {
        if (i != 4)
        {
            soma += M[i][2];
        }
    }

    return soma;
}
int main()
{
    int M[7][6];
    int i, j;
    int soma;
    srand(time(NULL));
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            M[i][j] = 1 + rand() % 20;
        }
    }
    printf("A matriz eh:\n");
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    soma = soma_matriz(M);
    printf("A soma da linha 5 e a coluna 3 = %d", soma);
    return 0;
}
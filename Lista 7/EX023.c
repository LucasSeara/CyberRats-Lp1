#include <stdio.h>
int main()
{
    float a[3][3] = {};
    float b[3][3] = {};
    int aux = 0;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor [%d][%d] da matriz 1:\n", i, j);
            scanf("%f", &a[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                aux+=a[i][k]*a[k][j];
            }
            b[i][j]=aux;
            aux=0;
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%.0f ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
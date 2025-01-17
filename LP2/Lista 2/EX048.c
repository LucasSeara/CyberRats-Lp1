#include <stdio.h>
void verifica_identidade(int A[5][5])
{
    int i,j;
    int identidade=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (i==j && A[i][j]==1)
            {
                identidade++;
            }
        }
    }
    if (identidade==5)
    {
        identidade=1;
    }
    if (identidade==1)
    {
        printf("A matriz e uma matriz identidade:\n");
    }else
    {
        printf("Não é uma matriz identidade:\n");
    }
}
int main()
{
    int A[5][5] = {0};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j)
            {
                A[i][j] = 1;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    verifica_identidade(A);
    return 0;
}
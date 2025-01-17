#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int soma_matriz(int A[5][5]){
    int i,j;
    int soma=0;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            soma+=A[i][j];
        }
    }
    return soma;
}
int main()
{
    int A[5][5];
    int i,j;
    int soma;
    srand(time(NULL));
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            A[i][j]=1+rand()%30;
        }
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    soma=soma_matriz(A);
    printf("A soma dos elementos da matriz =%d\n",soma);
    return 0;
}
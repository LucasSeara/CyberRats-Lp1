#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void transposta(int A[4][4]){
    int B[4][4];
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            B[i][j]=A[j][i];
        }
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    
    
}
int main()
{
    int A[4][4];
    int i,j;
    srand(time(NULL));
    printf("Digite o valor da matriz:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            A[i][j]=1+rand()%30;
        }
    }
    printf("Matriz A:\n");
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    printf("Matriz transposta:\n");
    transposta(A);
    return 0;
}
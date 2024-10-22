#include <stdio.h>
int main()
{
    int A[10] = {};
    int i, j;
    int igual;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite o valor %d do vetor\n", i + 1);
        scanf("%d", &A[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        for ( j = 0; j <=9; j++)
        {
            if (A[i]==A[j]&&i!=j)
            {
                igual=A[i];
                printf("Valores repetidos\n %d\n",igual);
            }
            
        }
        
    }
    return 0;
}
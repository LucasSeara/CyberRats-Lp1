#include <stdio.h>
int main()
{
    int A[10] = {};
    int i, j;
    int divisores = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 10; i++)
    {
        divisores = 0;
        for (j = A[i]; j > 0; j--)
        {
            if (A[i] % j == 0)
            {
                divisores++;
            }
            if (divisores > 2)
            {
                break;
            }
            
            
        }
            if (divisores==2)
            {
                printf("%d eh primo\n",A[i]);
            }
    }

    return 0;
}
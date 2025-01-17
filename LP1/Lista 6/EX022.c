#include <stdio.h>
int main()
{
    int A[10] = {};
    int B[10] = {};
    int C[20] = {};
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor A:\n", i + 1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor B:\n", i + 1);
        scanf("%d", &B[i]);
    }
    for (i = 0; i < 10; i++)
    {
        C[2*i]=A[i];
        C[2*i+1]=B[i];
    }

    for (i = 0; i < 20; i++)
    {
        printf("%d\n", C[i]);
    }
    return 0;
}
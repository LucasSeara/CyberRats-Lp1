#include <stdio.h>
int main()
{
    int A[6] = {};
    int i;
    for (i = 0; i <= 5; i++)
    {
        printf("Digite o valor %d par do vetor:\n", i + 1);
        scanf("%d", &A[i]);
        if (A[i] % 2 == 1)
        {
            i--;
            printf("Digite um numero par numeros impares sao inaceitaveis:\n");
        }
    }
    for (i = 5; i >= 0; i--)
    {
        printf("%d\n", A[i]);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int i;
    int A[6] = {};
    int somaPar = 0;
    int contImpar = 0;
    for (i = 0; i < 6; i++)
    {
        printf("Digite o %d valor:\n", i + 1);
        scanf("%d", &A[i]);
    }
    for (i = 0; i < 6; i++)
    {
        if (A[i] % 2 == 0)
        {
            printf("%d eh par:\n", A[i]);
            somaPar += A[i];
        }
        if (A[i] % 2 == 1)
        {
            printf("%d eh impar\n", A[i]);
            contImpar++;
        }
    }
    printf("A soma dos numeros pares =%d\n",somaPar);
    printf("A quantidade de numeros impares =%d\n",contImpar);
    return 0;
}
#include <stdio.h>
int main()
{
    /* Faça um programa que conte quantos números primos existem entre a e b.*/
    int a, b, i, j;
    int primo = 0;
    int divisores;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &a);
    printf("Digite o segundo numero:\n");
    scanf("%d", &b);
    for (i = a; i <= b; i++)
    {
        divisores=0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
            if (divisores > 2)
            {
                break;
            }
        }
        if (divisores == 2)
        {
            primo++;

        }
    }
    printf("Existem %d numeros primos entre os valores:\n", primo);
}
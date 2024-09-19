#include <stdio.h>
int main()
{
    /*Faça um programa que calcule a soma de todos os números primos abaixo de dois milhões.*/
    int divisores = 0;
    unsigned long long soma = 0;
    int i, j;
    printf("meus ovos");
    for (i = 2; i <= 2000000; i++)
    {

        divisores = 0;
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
            soma += i;
            printf("%d\n", i);
        }
    }
    printf("A soma de todos os numeros primos abaixo de 2m eh %d", soma);
    return 0;
}
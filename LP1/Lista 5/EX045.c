#include <stdio.h>
int main()
{
    /*Escreva um programa que leia um inteiro não negativo n e imprima a soma dos n primeiros números primos.*/
    int n, i, j;
    int divisores = 0;
    int soma = 0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);
    if (n > 0)
    {
        for (i = 1; i <= n; i++)
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
    }
    else
    {
        printf("Numero invalido");
    }
    printf("A soma dos numeros primos =%d", soma);
    return 0;
}
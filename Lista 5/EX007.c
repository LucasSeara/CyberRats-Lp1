#include <stdio.h>
int main()
{
    /*Faça um programa que receba um número inteiro maior do que 1, e verifique se o número fornecido é primo ou não.*/
    int numero, i, divisores;
    printf("Digite um numero:");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            divisores++;
        }
    }
    if (divisores == 2)
    {
        printf("Numero primo");
    }
    else
    {
        printf("Nao eh primo");
    }
    return 0;
}
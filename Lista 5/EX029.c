#include <stdio.h>
int main()
{
    /*Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números ímpares de 1 até N em ordem crescente.*/
    int numero, i;
    printf("Digite um numero:");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
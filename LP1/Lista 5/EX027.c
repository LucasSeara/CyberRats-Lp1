#include <stdio.h>
int main()
{
    /*Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares
de 0 até N em ordem crescente.*/
    int numero, i;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    for (i = 0; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
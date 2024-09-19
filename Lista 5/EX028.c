#include <stdio.h>
int main()
{
    /*Faça um programa que leia um número inteiro positivo par N e imprima todos os números pares
de 0 até N em ordem decrescente.*/
    int numero, i;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    for (i = numero; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
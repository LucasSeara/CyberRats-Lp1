#include <stdio.h>
int main()
{
    /*Faça um algoritmo que leia um número positivo e imprima seus divisores.*/
    int numero;
    printf("Digite um numero inteiro positivo:\n");
    scanf("%d", &numero);
    if (numero > 0)
    {
        for (int i = numero; i > 0; i--)
        {
            if (numero % i == 0)
            {
                printf("%d eh divisor\n", i);
            }
        }
    }

    return 0;
}
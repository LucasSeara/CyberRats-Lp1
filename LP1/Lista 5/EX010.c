#include <stdio.h>
int main()
{
    /*Escreva um programa que leia um número inteiro positivo n e, em seguida, imprima n linhas do
chamado Triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/
    int numero;
    int cont = 1;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &numero);
    if (numero > 0)
    {
        for (int i = 1; i <= numero; i++)
        {
            for (int x = 1; x <= i; x++)
            {
                printf("%d ", cont);
                cont++;
            }
            printf("\n");
        }
    }
    else
    {
        printf("Numeros negativos nao sao aceitos:");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    /*Escreva um programa que leia 10 números e exiba o menor e o maior valor lido.*/
    int i, numero;
    int maior = 0;
    int menor = 100000;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero;\n");
        scanf("%d", &numero);
        if (numero > maior)
        {
            maior = numero;
        }
        if (numero < menor)
        {
            menor = numero;
        }
    }
    printf("O maior numero lido eh %d e o menor eh %d",maior,menor);
    return 0;
}
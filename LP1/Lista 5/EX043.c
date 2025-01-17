#include <stdio.h>
int main()
{
    /*. Faça um programa que leia 10 números inteiros positivos, ignorando os não positivos, e imprima sua média.*/
    int i, numero;
    int cont = 0;
    int soma = 0;
    for (i = 1; i <= 10; i++)
    {
        printf("Digite um numero inteiro positivo:\n");
        scanf("%d", &numero);
        if (numero > 0)
        {
            soma += numero;
            cont++;
        }
    }
    printf("A media dos numeros positivos %d", soma / cont);
    return 0;
}
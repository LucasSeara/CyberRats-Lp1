#include <stdio.h>
int main()
{
    /*Faça um programa que leia um valor N inteiro e positivo, calcule e mostre o valor de E, conformea fórmula a seguir:*/
    int numero, i, j, fatorial;
    float e = 1.0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        fatorial = 1;
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
            fatorial *= j;
        }
        e += 1 / fatorial;
    }
    printf("O valor de E=%.1f", e);
    return 0;
}
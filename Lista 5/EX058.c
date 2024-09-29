#include <stdio.h>
int main()
{
    /*Faça um programa que calcule e escreva o valor de S na série*/
    int i, j;
    float soma = 0.0;
    for (i = 1; i <= 99; i += 2)
    {
        for (j = 1; j <= 50; j++)
        {
            soma += i / j;
        }
    }
    printf("S=%.1f", soma);
    return 0;
}
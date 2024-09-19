#include <stdio.h>
int main()
{
    /*Faça um programa que leia um número inteiro N e depois imprima os N primeiros números naturais ímpares.*/
    int n, i;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}

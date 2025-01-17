#include <stdio.h>
int main()
{
    /*Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
    int i, soma;
    for (i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            soma += i;
        }
    }
    printf("A soma dos 50 primeiros numeros pares eh %d", soma);
    return 0;
}
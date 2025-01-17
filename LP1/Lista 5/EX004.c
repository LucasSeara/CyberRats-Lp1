#include <stdio.h>
int main()
{
    /*Faça um programa que determine e mostre os cinco primeiros múltiplos de 3, considerando números maiores que 0.*/
    int i, multiplo;
    int numero = 3;
    for (i = 0; i < 5; i++)
    {
        multiplo = numero + 3;
        numero = multiplo;
        printf("%d ", numero);
    }

    return 0;
}
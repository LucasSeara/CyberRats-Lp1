#include <stdio.h>
int main()
{
    /*Faça um programa que some os termos de valor par da sequência de Fibonacci, cujos valores não ultrapassem quatro milhões.*/
    int resultado;
    int num1 = 0;
    int num2 = 1;
    resultado = num2 + num1;
    for (int i = 1; i <= 32; i++)
    {
        resultado = num2 + num1;
        num1 = num2;
        num2 = resultado;
        printf(" %d ", resultado);
    }
    return 0;
}
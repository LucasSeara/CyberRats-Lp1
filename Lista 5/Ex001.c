#include <stdio.h>
int main()
{
    /*Elabore um programa que faça leitura de vários números inteiros, até que se digite um número negativo. O programa tem que retornar o maior e o menor número lido.*/
    int numero, maiorNumero, menorNumero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    maiorNumero = numero;
    menorNumero = numero;
    while (numero >= 0)
    {
        if (numero > maiorNumero)
        {
            maiorNumero = numero;
        }
        else if (numero < menorNumero)
        {
            menorNumero = numero;
        }
        printf("Digite mais um numero\n");
        scanf("%d", &numero);
    }
    printf("O maior numero eh %d e o menor eh %d\n", maiorNumero, menorNumero);
    return 0;
}
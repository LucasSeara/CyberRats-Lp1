#include <stdio.h>
int main()
{
    /*Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores desse
número, com exceção dele próprio. Exemplo: a soma dos divisores do número 66 é 1 + 2 + 3 +
6 + 11 + 22 + 33 = 78*/
    int numero;
    int i;
    int divisor = 0;
    int soma = 0;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);
    for (i = 1; i < numero/2+1; i++)
    {
        if (numero % i == 0)
        {
            divisor = i;
            printf("%d\n", divisor);
            soma += divisor;
        }
    }
    printf("A soma dos divisores eh igual a %d", soma);
    return 0;
}
#include <stdio.h>
int main()
{
    /*Faça um programa que receba dois números. Calcule e mostre:
• A soma dos números pares desse intervalo de números, incluindo os números digitados;
• A multiplicação dos números ímpares desse intervalo, incluindo os digitados*/
    int n1, n2, i;
    int soma = 0;
    int multi = 1;

    printf("Digite um numero:\n");
    scanf("%d", &n1);
    printf("Digite outro numero:\n");
    scanf("%d", &n2);
    printf("%d", multi);
    if (n1 > n2)
    {
        for (i = n2; i <= n1; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;
            }
            else
            {
                multi *= i;
            }
        }
    }
    else
    {
        for (i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
            {
                soma += i;
            }
            else
            {
                multi *= i;
            }
        }
    }
    printf("A soma dos numeros pares no intervalo dos numeros =%d\n", soma);
    printf("A multiplicacao do numeros impares do intervalo =%d", multi);
    return 0;
}
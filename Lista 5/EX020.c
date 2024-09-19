#include <stdio.h>
int main()
{
    /*Faça um programa que calcule a diferença entre a soma dos quadrados dos primeiros 100 números
naturais e o quadrado da soma. Exemplo: A soma dos quadrados dos dez primeiros números
naturais é: 1
2 + 22 + ... + 102 = 385 O quadrado da soma dos dez primeiros números naturais
é: (1 + 2 + ... + 10)2 = 552 = 3025 A diferença entre a soma dos quadrados dos dez primeiros
números naturais e o quadrado da soma é 3025 - 385 = 2640*/
    int i;
    int numero = 0;
    int soma = 0;
    for (i = 1; i <= 100; i++)
    {
        numero += i * i;
        soma += i;
    }
    printf("A diferenca eh de %d", (numero - soma));

    return 0;
}
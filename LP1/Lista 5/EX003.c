#include <stdio.h>
int main()
{
    /*Leia um número positivo do usuário, então, calcule e imprima a sequência Fibonacci até o primeiro número superior ao número lido. Exemplo: se o usuário informou o número 30, a sequência a ser impressa será 0 1 1 2 3 5 8 13 21 34*/
    int numero, resultado;
    int num1 = 0;
    int num2 = 1;
    printf("Digite um numero positivo:\n");
    scanf("%d", &numero);
    printf("%d %d", num1, num2);
    resultado = num2 + num1;
    while (resultado < numero)
    {
        resultado = num2 + num1;
        num1 = num2;
        num2 = resultado;
        printf(" %d ", resultado);
    }
    return 0;
}
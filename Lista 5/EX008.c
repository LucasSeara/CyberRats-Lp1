#include <stdio.h>
int main()
{
    /*8. Faça um programa que receba vários números, calcule e mostre:
(a) A soma dos números digitados.
(b) A quantidade de números digitados.
(c) A média dos números digitados.
(d) O maior número digitado.
(e) O menor número digitado.
(f) A média dos números pares.
Finalize a entrada de dados caso o usuário informe o valor */
    int valor, numero, somaDosNumeros, quantidade, quantidadePares, maiorNumero, menorNumero, mediaPares;
    int somaPares = 0;
    somaDosNumeros = 0;
    maiorNumero = 0;
    menorNumero = 100000;
    quantidadePares = 0;
    float media;
    do
    {
        printf("Digite um numero:\n");
        scanf("%d", &numero);
        somaDosNumeros += numero;
        printf("A soma dos valores eh igual a %d\n", somaDosNumeros);
        quantidade++;
        printf("Um total de %d foram digitados\n", quantidade);
        media = somaDosNumeros / quantidade;
        printf("A media dos numeros digitados eh de %.1f\n", media);
        if (numero > maiorNumero)
        {
            maiorNumero = numero;
        }
        if (numero < menorNumero)
        {
            menorNumero = numero;
        }
        printf("O maior numero digitado eh %d\n", maiorNumero);
        printf("O menor numero digitado eh %d\n", menorNumero);
        if (numero % 2 == 0)
        {
            somaPares += numero;
            quantidadePares++;
            mediaPares = somaPares / quantidadePares;
        }
        printf("A media dos numeros pares eh igual a %d\n", mediaPares);
        printf("Digite 1 para finalizar:\n");
        scanf("%d", &valor);
    } while (valor != 1);

    return 0;
}
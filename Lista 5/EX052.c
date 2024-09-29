#include <stdio.h>
int main()
{
    /*Escreva um algoritmo que leia uma quantidade n de números e imprima o maior deles, além
de quantas vezes o maior número foi lido. A quantidade n de números a serem lidos deve ser
fornecida pelo usuário*/
    int n, i;
    int maior = 0;
    int valor = 0;
    int cont = 0;
    printf("Digite um numero:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Digite o %i numero:\n", i);
        scanf("%d", &valor);
        if (valor > maior)
        {
            maior = valor;
            cont=1;
        }
        else if (valor == maior)
        {
            cont++;
        }
    }
    printf("O maior valor foi %d impresso %d vezes", maior, cont);
}
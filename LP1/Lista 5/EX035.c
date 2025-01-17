#include <stdio.h>
int main()
{
    /*Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais. (Obs.: Neste caso, n representa a quantidade de elementos a serem lidos e somados).*/
    int quantidade, i, n;
    int soma = 0;
    printf("Digite um numero:\n");
    scanf("%d", &quantidade);
    for (i = 1; i <= quantidade; i++)
    {
        printf("Digite um numero a ser somado:\n");
        scanf("%d", &n);
        soma += n;
    }
    printf("A soma de todos os numeros lidos eh =%d", soma);
    return 0;
}
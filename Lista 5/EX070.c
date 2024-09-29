#include <stdio.h>
int main()
{
    /*Construa um programa que permita introduzir pelo terminal uma sequência de números inteiros e
determine se cada um desses números é ou não perfeito. Todos os números perfeitos encontrados
deverão ser escritos na tela. Chama-se perfeito a um número inteiro não negativo que seja igual
à soma dos seus divisores próprios, exceto ele mesmo (e.g. o número 6 possui divisores 1, 2, 3 e
6, portanto 1+2+3=6; 6 é um número perfeito – o número 8 possui divisores 1, 2, 4 e 8, portanto
1+2+4=7; 8 não é um número perfeito)*/
    int resposta, numero, i;
    int divisor = 0;
    do
    {
        divisor=0;
        printf("Digite o numero para ser analizado se eh perfeito ou nao:\n");
        scanf("%d", &numero);
        for (i = 1; i <= numero / 2; i++)
        {
            if (numero % i == 0)
            {
                divisor += i;
            }
        }
        if (divisor == numero)
        {
            printf("%d eh um numero perfeito\n", numero);
        }
        else
        {
            printf("%d nao eh um numero perfeito:\n", numero);
        }
        printf("Digite 1 para continuar e qualquer outro para parar:\n");
        scanf("%d", &resposta);

    } while (resposta != 1);

    return 0;
}
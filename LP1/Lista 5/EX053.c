#include <stdio.h>
int main()
{
    /*Escreva um algoritmo que leia um número inteiro entre 100 e 999 e imprima na saída cada um
dos algarismos que compõem o número.*/
    int numero, cem, dez, um;

    printf("Digite um numero:\n");
    scanf("%d", &numero);
    if (numero < 100 || numero > 999)
    {
        printf("Numero invalido:\n");
    }
    else
    {
        cem=numero/100;
        dez=(numero-(cem*100))/10;
        um=numero-(cem*100+dez*10);
    }
    printf("%d\n",cem);
    printf("%d\n",dez);
    printf("%d\n",um);
    return 0;
}
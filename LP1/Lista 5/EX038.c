#include <stdio.h>
#include <math.h>
int main()
{
    /*Faça um programa que leia um conjunto não determinado de valores, um de cada vez, e escreva
para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize a entrada de
dados com um valor negativo ou zero.*/
    float valor;
    printf("Digite um valor:\n");
    scanf("%f", &valor);
    while (valor>0)
    {
        printf("Esse valor ao quadrado eh =  %.1f\n",valor*valor);
        printf("Esse valor ao cubo eh = %.1f\n",valor*valor*valor);
        printf("A raiz quadrada eh = %.1f\n",sqrt(valor));
        printf("Digite outro valor:\n");
        scanf("%f",&valor);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    /*Faça um programa que calcula a associação em paralelo de dois resistores R1 e R2 fornecidos
pelo usuário via teclado. O programa fica pedindo estes valores e calculando até que o usuário
entre com um valor de resistência igual a zero. A fórmula para o cálculo é*/
    float r1, r2, r;
    do
    {
    printf("Digite o valor de r1:\n");
    scanf("%f", &r1);
    if (r1==0)
    {
        printf("numero negado\n");
        break;
    }
    printf("Digite o valor de r2:\n");
    scanf("%f", &r2);
    r = (r1 * r2) / (r1 + r2);
    printf("O valor da resistencia eh igual a %.1f\n", r);
    } while (r2 != 0);
    return 0;
}
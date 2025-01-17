#include <stdio.h>
int main()
{
    /*Faça um programa que calcule o menor número divisível por cada um dos números de 1 a 20. Exemplo: 2520 é o menor número que pode ser dividido por cada um dos números de 1 a 10, sem sobrar resto*/
    int i;
    int j = 0;
    int valor = 19;
    do
    {
        valor++;
        j = 0;
        for (i = 1; i <= 20; i++)
        {
            if (valor % i == 0)
            {
                j++;
            }
        }
    } while (j != 20);
    printf("%d", valor);

    return 0;
}
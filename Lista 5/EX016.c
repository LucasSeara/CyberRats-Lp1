#include <stdio.h>
int main()
{
    /*Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.*/
    int tres = 0;
    int cinco = 0;
    for (int i = 0; i <= 1000; i++)
    {
        tres = 3 * i;
        cinco = 5 * i;
        if (tres <= 1000)
        {
            printf("%d eh multiplo de 3\n", tres);
        }
        if (cinco <= 1000)
        {
            printf("%d eh multiplo de 5\n", cinco);
        }
    }
    return 0;
}
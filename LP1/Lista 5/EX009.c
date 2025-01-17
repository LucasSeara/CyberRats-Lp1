#include <stdio.h>
int main()
{
    /* Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 100, 3 vezes. A primeira vez deve usar a estrutura de repetição for, a segunda while, e a terceira do while.*/
    int i = 1;
    int x = 1;
    printf("Usando For:\n");
    for (int i = 0; i <= 100; i++)
    {
        printf("%d\n", i);
    }
    printf("Usando While:\n");
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    }
    printf("Usando Do While\n");
    do
    {
        printf("%d\n", x);
        x++;
    } while (x <= 100);

    return 0;
}
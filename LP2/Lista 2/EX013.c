#include <stdio.h>
int maior_primo(int num)
{
    int i, j;
    int maior = 0;
    int p = 0;
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            for (j = 1; j <= i; j++)
            {
                if ( i % j == 0)
                {
                    p++;
                }
            }
            if (p!=2)
            {
                p=0;
            }
            
            if (p == 2)
            {
                maior = i;
            }
        }
    }
    return maior;
}
int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);
    printf("O maior numero primo: %d\n", maior_primo(numero));
    return 0;
}
#include <stdio.h>
int qnt_primos(int n)
{
    int i, j;
    int primo = 0;
    int div = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                div++;
            }
        }
        if (div > 2)
        {
            div = 0;
        }
        if (div == 2)
        {
            primo++;
        }
    }
    return primo;
}
int main()
{
    int n;
    int primo;
    printf("Digite o valor n:\n");
    scanf("%d", &n);
    primo = qnt_primos(n);
    printf("A quantidade de primos menor que n = %d", primo);
    return 0;
}
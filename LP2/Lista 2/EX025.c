#include <stdio.h>
int fatorial(int n)
{
    int i;
    n--;
    for (i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}

double fatorial_expo(int n)
{
    int i;
    int x = n;
    int expoente = fatorial(n);
    for (i = 1; i < expoente; i++)
    {
        n *= x;
    }

    return n;
}
int main()
{
    int n;
    int fatex;
    printf("Digite o valor de n:\n");
    scanf("%d", &n);
    fatex = fatorial_expo(n);
    printf("O fatorial exponencial de %d = %d", n, fatex);
    return 0;
}
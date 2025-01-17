#include <stdio.h>
int fatorial(int n)
{
    int i;
    for (i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}
int somatorio(int n)
{
    int i;
    int soma=0;
    for (i = 1; i <= n; i++)
    {
        soma+=i;
    }
    return soma;
}

int main()
{
    int n;
    int A;
    int B;
    printf("Digite o valor n:\n");
    scanf("%d", &n);
    A = fatorial(n);
    B = somatorio(n);
    printf("O valor de %d! =%d\n", n, A);
    printf("O valor do somatorio de %d =%d\n",n,B);
    return 0;
}
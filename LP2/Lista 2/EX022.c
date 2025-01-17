#include <stdio.h>
long int fatorial(int n)
{
    int i;
    for (i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}
long int fatorial_quadruplo(int n)
{
    int fat;
    fat=fatorial(2*n)/fatorial(n);
    return fat;
}
int main()
{
    int n;
    int fatori;
    printf("Digite um valor de n:\n");
    scanf("%d", &n);
    fatori=fatorial_quadruplo(n);
    printf("O fatorial quadruplo de %d = %d",n,fatori);
    return 0;
}
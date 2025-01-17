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
int neperiano(int n){
    int i;
    int soma=0;
    for ( i = 1; i <= n; i++)
    {
        soma+=fatorial(i);
    }
    return soma;
}
int main()
{
    int n;
    printf("Digite a quantidade de termos a serem calculados dentro da serie:\n");
    scanf("%d", &n);
    printf("O numero neperiano ate o valor %d = 1/%d",n,neperiano(n));
    return 0;
}
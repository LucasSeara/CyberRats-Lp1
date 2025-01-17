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
int soma_algarismo(int n){
    int dig1,dig2;
    int soma=0;
    dig1=n/10;
    dig2=n%10;
    soma=dig1+dig2;
    return soma;
}
int main()
{
    int n = 0;
    int fatorialn;
    int som;
    printf("Digite um valor n:\n");
    scanf("%d", &n);
    fatorialn = fatorial(n);
    som = soma_algarismo(fatorialn);
    printf("O fatorial de n =%d\n",fatorialn);
    printf("A soma dos algarismos = %d",som);
    return 0;
}
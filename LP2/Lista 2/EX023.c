#include<stdio.h>
int fatorial(int n)
{
    int i;
    for (i = n - 1; i > 0; i--)
    {
        n *= i;
    }
    return n;
}
int superfatorial(int n){
    int i;
    int super=1;
    for ( i = 2; i <=n; i++)
    {
        super=super*fatorial(i);
    }
    return super;
}
int main(){
    int n;
    int superFatorial;
    printf("Digite um valor n para calcular o superfatorial:\n");
    scanf("%d", &n);
    superFatorial=superfatorial(n);
    printf("O super fatorial de %d = %d",n,superFatorial);
    return 0;
}
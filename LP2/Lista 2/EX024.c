#include <stdio.h>
int potencia(int v){
    int i;
    int x=v;
    for ( i = 2; i <= v; i++)
    {
        x*=v;
        
    }
    return x;
}
int hiperfatorial(int n)
{
    int i;
    int h = 1;
    
    for (i = 2; i <= n; i++)
    {
        h*=potencia(i);
    }
    return h;
}
int main()
{
    int n;
    int num;
    printf("Digite um valor n para calcular o hiperfatorial:\n");
    scanf("%d", &n);
    num = hiperfatorial(n);
    printf("O hiperfatorial de %d =%d", n, num);
    return 0;
}
#include <stdio.h>
int main()
{
    int n,i;
    printf("digite a quantidade de linhas do triangulo de pascal:\n");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        int v=1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",v);
            v=v*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}
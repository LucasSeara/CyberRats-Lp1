#include <stdio.h>
int main()
{
    int a, b;
    int i;
    int vA[4] = {};
    int vB[4] = {};
    int soma[4] = {};
    printf("Digite um valor menor que 10000:\n");
    scanf("%d", &a);
    printf("Digite outro numero:\n");
    scanf("%d", &b);
    vA[0] = a % 10;
    vA[1] = (a % 100 - vA[0]) / 10;
    vA[2] = (a%1000- (vA[1]*10+vA[0]))/100;
    vA[3]=  a/1000;
    vB[0] = b % 10;
    vB[1] = (b % 100 - vB[0]) / 10;
    vB[2] = (b%1000- (vB[1]*10+vB[0]))/100;
    vB[3]=  b/1000;
    for (i = 0; i < 4; i++)
    {
       soma[i]+=vA[i]+vB[i];
       if (soma[i]>=10&&i<3)
       {
        soma[i]-=10;
        soma[i+1]++;
       }
    }
    for ( i = 0; i < 4; i++)
    {
        printf("%d\n",soma[i]);
    }
    return 0;
}
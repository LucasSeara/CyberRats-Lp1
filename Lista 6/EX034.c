#include <stdio.h>
int main()
{
    int v[10] = {};
    int i, j, n;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%d", &n);
        for (j = 0; j < i; j++)
        {
            if (v[j]==n)
            {
                printf("Digite outro numero:\n");
                i--;
            }
        }
        v[i]=n;
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",v[i]);
    }
    return 0;
}
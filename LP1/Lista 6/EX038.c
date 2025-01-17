#include <stdio.h>
int main()
{
    int v[10] = {};
    int i, j, a;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%d", &v[i]);
        for (j = 0; j < 10; j++)
        {
            if (v[i] < v[j])
            {
                a=v[i];
                v[i]=v[j];
                v[j]=a;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    return 0;
}
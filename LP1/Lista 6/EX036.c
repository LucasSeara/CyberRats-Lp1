#include <stdio.h>
int main()
{
    float v[10] = {};
    float a;
    int i, j;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%f", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        int menor = i;
        for (j = i; j < 10; j++)
        {
            if (v[j] < v[menor])
            {
                menor = j;
            }
        }
        a = v[i];
        v[i] = v[menor];
        v[menor] = a;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%.0f\n", v[i]);
    }

    return 0;
}
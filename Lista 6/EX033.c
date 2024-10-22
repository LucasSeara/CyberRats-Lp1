#include <stdio.h>
int main()
{
    int V[15] = {};
    int i;
    int cont = 0;
    for (i = 0; i < 15; i++)
    {
        printf("Digite o valor %d do vetor:\n", i + 1);
        scanf("%d", &V[i]);
    }
    for (i = 0; i < 15; i++)
    {
        if (V[i] != 0)
        {
            V[cont] = V[i];
            cont++;
        }
    }
    for (i = cont; i < 15; i++)
    {
        V[i] = 0;
    }
    for (i = 0; i < 15; i++)
    {
        printf("%d\n", V[i]);
    }

    return 0;
}
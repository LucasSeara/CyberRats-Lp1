#include <stdio.h>
int main()
{
    int x[5] = {};
    int y[5] = {};
    int soma[5] = {};
    int produto[5] = {};
    int diferenca[5] = {};
    int intersec[5]={};
    int uniao[10]={};
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor X:\n", i + 1);
        scanf("%d", &x[i]);
    }
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor Y:\n", i + 1);
        scanf("%d", &y[i]);
    }
    for (i = 0; i < 5; i++)
    {
        soma[i] = x[i] + y[i];
        produto[i] = x[i] * y[i];
    }
    printf("-----------Soma entre os vetores de mesma posicao------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("A soma entre X[%d]e Y[%d]=%d:\n", i, i, soma[i]);
    }
    printf("----------Produto entre os vetores de mesma posicao-----------\n");
    for (i = 0; i < 5; i++)
    {
        printf("O produto entre os vetores X[%d]e Y[%d]=%d:\n", i, i, produto[i]);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        if (x[i]!=y[i])
        {
            diferenca[i]=x[i];
        }
        if (x[i]==y[i])
        {
            intersec[i]=x[i];
        }
        
    }
    printf("--------------Diferenca entre os vetores x e Y---------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",diferenca[i]);
    }
    printf("--------------Interseccao entre os vetores x e Y---------------\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n",intersec[i]);
    }
    printf("--------------Uniao entre os vetores x e Y---------------\n");
    for ( i = 0; i < 5; i++)
    {
       if (x[i]!=y[i])
       {
        uniao[i]=x[i];
        uniao[i+5]=y[i];
       }
       else{
        uniao[i]=x[i];
       }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",uniao[i]);
    }
    
    return 0;
}
#include <stdio.h>
int main()
{
    int A[10] = {};
    int x, i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor: \n",i+1);
        scanf("%d",&A[i]);
    }
    printf("Digite um valor:\n");
    scanf("%d",&x);
    for ( i = 0; i < 10; i++)
    {
        if (A[i]%x==0)
        {
            printf("%d eh multiplo de %d:\n",A[i],x);
        }
        
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int A[10] = {0};
    int maior = 0;
    int menor = 1000000;
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite o valor %d do vetor ", i + 1);
        scanf("%d", &A[i]);
       if (A[i]>maior)
       {
        maior=A[i];
       }if (A[i]<menor)
       {
        menor=A[i];
       }
    }
    printf("O menor valor=%d\n",menor);
    printf("O maior valor =%d\n",maior);
    return 0;
}
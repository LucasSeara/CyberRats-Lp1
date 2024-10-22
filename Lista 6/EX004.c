#include <stdio.h>
int main()
{
    int A[8] = {};
    int i, x, y;
    int soma = 0;
    for (i = 0; i <= 7; i++)
    {
        printf("Digite o valor %d do vetor", i + 1);
        scanf("%d", &A[i]);
    }
    printf("Escolha uma posicao do vetor:\n");
    scanf("%d", &x);
    printf("Escolha outra posicao do vetor:\n");
    scanf("%d", &y);
    soma = A[x] + A[y];
    printf("A soma das duas posicoes =%d", soma);
    return 0;
}
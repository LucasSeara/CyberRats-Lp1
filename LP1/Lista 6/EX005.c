#include <stdio.h>
int main()
{
    int A[10] = {0};
    int par = 0;
    int i;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite o valor %d do vetor ", i + 1);
        scanf("%d", &A[i]);
        if (A[i] % 2 == 0)
        {
            par++;
        }
    }
    printf("O vetor possui %d valores pares:\n", par);
    return 0;
}
#include <stdio.h>
void desenha_triangulo(int n)
{
    int i, j;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n; i > 0; i--)
    {
        for (j = i-1; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Digite a largura do triangulo:\n");
    scanf("%d", &n);
    desenha_triangulo(n);
    return 0;
}
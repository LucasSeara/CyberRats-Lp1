#include <stdio.h>
void desenha_triangulo(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 2 * i - 1; j++)
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
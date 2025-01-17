#include <stdio.h>
void desenha_linha()
{
    printf("=");
}
int main()
{
    int i;
    int v;
    printf("Digite a quantidade de vezes que deseja que seja desenhado a linha:\n");
    scanf("%d", &v);
    for (i = 0; i < v; i++)
    {
        desenha_linha();
    }
    return 0;
}
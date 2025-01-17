#include <stdio.h>
void desenha_exclamacao(int n){
    int i,j;
    for ( i = 0; i <n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
    
}
int main()
{
    int n;
    printf("Digite a quantidade de linhas a ser preenchida:\n");
    scanf("%d", &n);
    desenha_exclamacao(n);
    return 0;
}
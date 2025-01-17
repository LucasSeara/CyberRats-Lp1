#include <stdio.h>
#include <math.h>
int quadrado_perfeito(int n)
{
    int i;
    int contador = sqrt(n);
    int flag=0;
    for (i = 0; i <= contador; i++)
    {
        if (i*i==n)
        {
            flag=1;
        }
    }
    return flag;
}
int main()
{
    int n;
    int quadrado=0;
    printf("Digite um valor para verificar se eh um quadrado perfeito:\n");
    scanf("%d", &n);
    quadrado=quadrado_perfeito(n);
    if (quadrado)
    {
        printf("O valor eh um quadrado perfeito:\n");
    }else
    {
        printf("Nao eh um quadrado perfeito:\n");
    }
    
    
    return 0;
}
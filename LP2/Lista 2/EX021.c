#include <stdio.h>
int fatorial_duplo(int n){
    int i;
    int duplo=1;
    for ( i = n; i > 0; i--)
    {
        if (i%2==1)
        {
            duplo*=i;
        }
        
    }
    return(duplo);
}
int main()
{
    int n;
    int fat;
    printf("Digite um numero impar para calcular o fatorial duplo:\n");
    scanf("%d", &n);
    fat=fatorial_duplo(n);
    if (n % 2 == 1)
    {
        printf("O fatorial duplo de %d = %d\n",n,fat);
    }else
    {
        printf("Numero invalido:\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    /*12. Faça um programa para verificar se um determinado número inteiro é divisível por 3 ou 5, mas não simultaneamente pelos dois.*/
    int n;
    printf("Insira um numero inteiro\n");
    scanf("%d",&n);
    if (n%3==0)
    {   if (n%5==0)
        {
            printf("Valor anulado pois tambem eh divisivel por 5\n");
            return 0;
        }
        printf("Divisivel por 3");
    }else if (n%5==0)
    {   if (n%3==0)
    {
        printf("Valor anulado pois tambem eh divisivel por 3\n");
        return 0;
    }
        printf("Divisivel por 5\n");
    }
    return 0;
}
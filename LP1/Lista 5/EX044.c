#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
    /*Faça um programa que simule o lançamento de dois dados d1 e d2, n vezes. A saída deve exibir o valor de cada dado e a relação entre eles (>, <, =) para cada lançamento.*/
    int numeroDeLancamentos,i,d1,d2;
    printf("Digite quantas vezes os dados serao lancados:\n");
    scanf("%d",&numeroDeLancamentos);
    srand(time(NULL));
    for ( i = 1; i <= numeroDeLancamentos; i++)
    {
        d1=1+rand()%6;
        d2=1+rand()%6;
        printf("d1=%d d2=%d\n",d1,d2);
        if (d1>d2)
        {
            printf("d1>d2\n");
        }else if (d2>d1)
        {
            printf("d2>d1\n");
        }else{
            printf("d1=d2\n");
        }
    }
    
    return 0;
}
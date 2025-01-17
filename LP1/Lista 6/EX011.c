#include<stdio.h>
int main(){
    float A[10]={};
    int i;
    int negativo=0;
    float soma=0;
    for ( i = 0; i <= 9; i++)
    {
        printf("Digite o %d valor do vetor:\n",i+1);
        scanf("%f",&A[i]);
        if (A[i]<0)
        {
            negativo++;
        }
        if (A[i]>0)
        {
            soma+=A[i];
        }
    }
    printf("A quantidade de valores negativos foi de %d\n",negativo);
    printf("A soma dos valores positivos =%.1f",soma);
    return 0;
}
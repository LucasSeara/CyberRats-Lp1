#include<stdio.h>
int main(){
    float A[5]={};
    float B[5]={};
    int i;
    float produtoEscalar=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d do vetor A:\n",i+1);
        scanf("%f",&A[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Digite o valor da posicao %d do vetor B:\n",i+1);
        scanf("%f",&B[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        produtoEscalar+=A[i]*B[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("Posicao A[%d]=%.f\n",i,A[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf ("Posicao B[%d]=%.1f\n",i,B[i]);
    }
    printf("O produto escalar=%.2f\n",produtoEscalar);
    return 0;
}
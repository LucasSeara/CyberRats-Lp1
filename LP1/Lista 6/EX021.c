#include<stdio.h>
int main(){
    int A[10]={};
    int B[10]={};
    int C[10]={};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor A:\n",i+1);
        scanf("%d",&A[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor B:\n",i+1);
        scanf("%d",&B[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        C[i]=A[i]-B[i];
        printf("%d\n",C[i]);
    }
    return 0;
}
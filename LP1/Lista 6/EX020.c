#include<stdio.h>
int main(){
    int A[10]={};
    int B[10]={};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite um numero inteiro entre 0-50:\n");
        scanf("%d",&A[i]);
        if (A[i]%2==1)
        {
            B[i]=A[i];
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d  %d\n",A[i],B[i]);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int A[10]={};
    int B[10]={};
    int AB[10]={};
    int i,j;
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
        for ( j = 0; j < 10; j++)
        {
            if (A[i]==B[j])
            {
                AB[i]=A[i];
            }
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("Vetor AB: %d\n",AB[i]);
    }
    return 0;
}
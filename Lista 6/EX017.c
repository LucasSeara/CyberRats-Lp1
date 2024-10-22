#include<stdio.h>
int main(){
    int A[10]={};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor: \n",i+1);
        scanf("%d",&A[i]);
        if (A[i]<0)
        {
            A[i]=0;
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d\n",A[i]);
    }
    
    return 0;
}
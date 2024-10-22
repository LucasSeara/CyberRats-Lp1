#include<stdio.h>
int main(){
    int A[6]={};
    int i;
    for ( i = 0; i <=5; i++)
    {
        printf("Digite o valor %d do vetor: ",i+1);
        scanf("%d",&A[i]);
    }
    for ( i = 5; i >= 0; i--)
    {
        printf("%d\n",A[i]);
    }
    
    return 0;
}
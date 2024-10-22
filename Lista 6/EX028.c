#include<stdio.h>
int main(){
    int V[10]={};
    int V1[10]={};
    int V2[10]={};
    int i;
    for ( i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor:\n",i+1);
        scanf("%d",&V[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (V[i]%2==0)
        {
            V1[i]=V[i];
        }else{
            V2[i]=V[i];
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        printf("V1-->%d\n",V1[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("V2-->%d\n",V2[i]);
    }
    return 0;
}
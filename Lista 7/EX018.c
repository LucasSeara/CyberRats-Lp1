#include<stdio.h>
int main(){
    int m[3][3]={};
    int a[3]={};
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("Insira o elemento [%d][%d] da matriz\n",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < 3; i++)
    {
        
        for ( j = 0; j < 3; j++)
        {
            a[i]+=m[j][i];
        }
    }
    printf("O valor da array a partir da soma das colunas foi de :\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int m[5][5]={};
    int i,j;
    srand(time(NULL));
    for ( i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            m[i][j]=1+rand()%99;            
        }
    }
    printf("Tabela do bingo\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
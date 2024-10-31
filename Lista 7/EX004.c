#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    int m[4][4] = {};
    int maior=0;
    int maiorCol,maiorLin;
    int i, j;
    
    srand(time(NULL));
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            m[i][j] = 1 + rand() % 30;
        }
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            if (m[i][j]>maior)
            {
                maior=m[i][j];
                maiorLin=i;
                maiorCol=j;
            }  
        }
    }
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
    printf("O maior valor esta na localizacao m[%d][%d]",maiorLin,maiorCol);
    return 0;
}
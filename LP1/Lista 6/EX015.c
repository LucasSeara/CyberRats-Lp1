#include<stdio.h>
int main(){
     int A[20] = {};
    int i, j;
    for (i = 0; i <20; i++)
    {
        printf("Digite o valor %d do vetor\n", i + 1);
        scanf("%d", &A[i]);
    }
    for ( i = 0; i <=9; i++)
    {
        for ( j = 0; j <20; j++)
        {
            if (A[i]==A[j]&&i!=j)
            {
                printf("Valores repetidos\n %d\n",A[i]);
                A[i]=0;
            }
        }
    }
    for ( i = 0; i < 20; i++)
    {
        printf("%d\n",A[i]);
    }
    return 0;
}
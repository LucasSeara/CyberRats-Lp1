#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void separar_vet(int x[30]){
    int A[30];
    int B[30];
    int i;
    int j=0;
    int k=0;
    for ( i = 0; i < 30; i++)
    {
        if (x[i]%2==0)
        {
            A[j]=x[i];
            j++;
        }
        if (x[i]%2==1)
        {
            B[k]=x[i];
            k++;
        }
    }
    printf("Valores pares de x:\n");
    for ( i = 0; i < j; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    printf("Valores impares:\n");
    for ( i = 0; i < k; i++)
    {
        printf("%d ",B[i]);
    }
    
}
int main(){
    int x[30];
    int i;
    srand(time(NULL));
    for ( i = 0; i <30; i++)
    {
        x[i]=1+rand()%50;
    }
    separar_vet(x);
    return 0;
}
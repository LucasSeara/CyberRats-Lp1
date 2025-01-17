#include<stdio.h>
int main(){
    int i;
    int A[6]={};
    for ( i = 0; i <=5; i++)
    {
        printf("Digite o %d valor",i+1);
        scanf("%d\n",&A[i]);
    }
    printf("Os valores lidos foram:\n");
    for ( i = 0; i <= 5; i++)
    {
        printf("%d\n",A[i]);
    }
    
    return 0;
}
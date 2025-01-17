#include<stdio.h>
int main(){
    float A[10]={};
    float B[10]={};
    int i;
    for ( i = 0; i <=9; i++)
    {
        printf("Digite o valor %d do vetor:\n",i+1);
        scanf("%f",&A[i]);
    }
    printf("Os componentes de A sao:\n");
    for ( i = 0; i <= 9; i++)
    {
        printf("%.1f\n",A[i]);
        B[i]=A[i]*A[i];
    }
    printf("Os componentes de B sao:\n");
    for ( i = 0; i <= 9; i++)
    {
        printf("%.1f\n",B[i]);
    }
    return 0;
}
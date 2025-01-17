#include<stdio.h>
int main(){
    /*1. Faça um programa que receba dois números e mostre qual deles é o maior*/
    int n1,n2;
    printf("Digite um numero inteiro: \n");
    scanf("%d",&n1);
    printf("Digite outro numero inteiro: \n");
    scanf("%d",&n2);
    if (n1>n2)
    {
        printf("%d eh maior que %d \n",n1,n2);
    }else{
        printf("%d eh maior que %d",n2,n1);

    }
    return 0;
}
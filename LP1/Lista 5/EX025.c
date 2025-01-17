#include<stdio.h>
int main(){
    /*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
de 0 até N em ordem crescente.*/
    int n,i;
    printf("Digite um numero:\n");
    scanf("%d",&n);
    for ( i = 0; i <=n; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
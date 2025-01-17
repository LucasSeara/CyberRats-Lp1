#include<stdio.h>
int main(){
    /*Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
de 0 até N em ordem decrescente.*/
    int numero,i;
    printf("Digite um numero:\n");
    scanf("%d",&numero);
    for ( i = numero; i >= 0; i--)
    {
        printf("%d\n",i);
    }
    
    return 0;
}
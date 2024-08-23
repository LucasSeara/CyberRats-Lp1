#include<stdio.h>
int main(){
    /*7. Faça um programa que receba um número inteiro e verifique se este número é par ou ímpar.*/
    int numero;
    printf("Digite um numero inteiro: \n");
    scanf("%d",&numero);
    if (numero%2==0)
    {
        printf("O numero %d eh par",numero);
    }else{
        printf("O numero %d eh impar",numero);
    }
    return 0;
}
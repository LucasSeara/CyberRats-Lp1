#include<stdio.h>
int main(){
    /* Faça um programa que leia 10 números inteiros e imprima sua média.*/
    int i,numero;
    int soma =0;
    double media;
    for ( i = 1; i <= 10; i++)
    {
        printf("Digite um numero:\n");
        scanf("%d",&numero);
        soma+=numero;
    }
    media=soma/i;
        printf("A media dos numeros eh %.1lf\n",media);
    return 0;
}
#include<stdio.h>
int main(){
    /*Escreva um programa para calcular o valor da seguinte série para 5 termos*/
    float i,j,fatorial;
    float s=0;
    for ( i = 1; i <= 5; i++)
    {
        fatorial=2;
        for ( j = 1; j <= i; j++)
        {
            fatorial*=j;
        }
            s+=i/fatorial;
    }
    printf("O resultado da serie he de %f",s);
    return 0;
}
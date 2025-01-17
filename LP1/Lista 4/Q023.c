#include<stdio.h>
int main(){
    /*Escreva um programa completo que, dados dois números inteiros, mostre na tela o maior deles, assim como a diferença existente entre ambos.*/
    int numero1,numero2;
    printf("Digite um numero: \n");
    scanf("%d",&numero1);
    printf("Digite outro numero: \n");
    scanf("%d",&numero2);
    if (numero1>numero2)
    {
        printf("%d eh o maior e a diferenca entre eles eh %d ",numero1,(numero1-numero2));
    }else if (numero2>numero1)
    {
        printf("%d eh o maior e a diferenca entre eles eh %d",numero2,(numero2-numero1));
    }
    return 0;
}
#include<stdio.h>
int main(){
    /*36. Faça um programa que leia dois números reais e imprime a diferença do maior pelo menor.*/
    float n1,n2;
    printf("Digite um numero real: \n");
    scanf("%f",&n1);
    printf("Digite outro numero real: \n");
    scanf("%f",&n2);
    float dif=n1-n2;
    printf("A diferenca entre os dois valores eh de %.1f",dif);
    return 0;
}
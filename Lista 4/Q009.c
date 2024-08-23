#include<stdio.h>
int main(){
    /*9. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir, verifique e mostre qual a classificação dessa pessoa*/
    float altura,peso;
    printf("Digite sua altura: \n");
    scanf("%f",&altura);
    printf("Digite seu Peso: \n");
    scanf("%f",&peso);
    if ((altura<1.20)&&(peso<60))
    {
        printf("Classificacao A\n");
    }else if ((altura<1.20)&&(peso<90)&&(peso>60))
    {
        printf("Classificacao D\n");
    }else if ((altura<1.20)&&(peso>90))
    {
        printf("Classificacao G");
    }else if ((altura>=1.20&&altura<=1.70)&&(peso<=60))
    {
        printf("Classificacao B");
    }else if ((altura>=1.20&&altura<=1.70)&&(peso<90)&&(peso>60))
    {
        printf("Classificacao E");
    }else if ((altura>=1.20&&altura<=1.70)&&(peso>90))
    {
        printf("Classificacao H");
    }else if ((altura>1.70)&&(peso<=60))
    {
        printf("Classificacao C");
    }else if ((altura>1.70)&&(peso<90&&peso>60))
    {
        printf("Classificacao F");
    }else
    {
        printf("Classificacao I");
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
#include<stdio.h>
int main(){
    /*8. Faça um programa que receba três números e mostre-os em ordem crescente.*/
    int numero1,numero2,numero3;
    printf("Digite o primeiro numero inteiro: \n");
    scanf("%d",&numero1);
    printf("Digite o segundo numero inteiro: \n");
    scanf("%d",&numero2);
    printf("Digite o terceiro numero inteiro: \n");
    scanf("%d",&numero3);
    if ((numero1>numero2)&&(numero2>numero3))  
    {
        printf("%d,%d,%d",numero1,numero2,numero3);
    }else if ((numero2>numero1)&&(numero1>numero3))
    {
        printf("%d,%d,%d",numero2,numero1,numero3);
    }else if ((numero2>numero3)&&(numero3>numero1))
    {
        printf("%d,%d,%d",numero2,numero3,numero1);
    }else
    {
        printf("%d,%d,%d",numero3,numero1,numero2);
    }
    
    
    
    
    return 0;
}
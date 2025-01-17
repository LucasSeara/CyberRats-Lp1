#include<stdio.h>
int main(){
    /*Faça um programa que receba dois números e mostre o maior. Se por acaso, os dois números forem iguais, imprima a mensagem "Números iguais".*/
    int num1,num2;
    printf("Digite dois numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    if (num1>num2)
    {
        printf("%d eh maior",num1);
    }else if (num2>num1)
    {
        printf("%d eh maior",num2);
    }else
    {
        printf("Numeros iguais");
    }
    return 0;
}
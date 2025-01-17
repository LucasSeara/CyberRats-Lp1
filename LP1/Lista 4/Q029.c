#include<stdio.h>
int main(){
    /*Faça um programa que mostre ao usuário um menu com 4 opções de operações matemáticas (as básicas, por exemplo). O usuário escolhe uma das opções e o seu programa então pede dois valores numéricos e realiza a operação, mostrando o resultado e saindo.*/
    int escolha;
    float a,b,resultado;
    printf("Escolha uma das 4 operacoes\n");
    printf("1-adicao\n");
    printf("2-subtracao\n");
    printf("3-multiplicacao\n");
    printf("4-divisao\n");
    scanf("%d",&escolha);
    printf("Escolha 2 valores para ser realizado a operacao:\n");
    scanf("%f",&a);
    scanf("%f",&b);
    switch (escolha)
    {
    case 1:
        resultado=a+b;
        printf("A adicao entre %.0f + %.0f tem como resultado = %.0f",a,b,resultado);
        break;
    case 2:
        resultado=a-b;
        printf("A subtracao entre %.0f + %.0f tem como resultado = %.0f\n ",a,b,resultado);
        break;
    case 3:
        resultado=a*b;
        printf("A multiplicacao entre %.0f + %.0f tem como resultado = %.0f\n",a,b,resultado);
        break;
    case 4:
        resultado=a/b;
        printf("A divisao entre %.0f + %.0f tem como resultado = %.0f\n",a,b,resultado);
        break;
    default:
        printf("opcao invalida");
        break;
    }
    return 0;
}
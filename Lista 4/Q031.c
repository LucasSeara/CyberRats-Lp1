#include<stdio.h>
int main(){
    /*Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal, utilizando as seguintes fórmulas (onde h corresponde à altura):
• Homens: (72.7 × h) − 58
• Mulheres: (62.1 × h) − 44.7*/
    float altura,calculo;
    int sexo;
    printf("Digite a sua altura:\n");
    scanf("%f",&altura);
    printf("Qual o seu sexo\n");
    printf("1-Masculino:\n");
    printf("2-Feminino:\n");
    scanf("%d",&sexo);
    switch (sexo)
    {
    case 1:
        calculo=(72.7*altura)-58;
        printf("O peso ideal sera de =%.1f",calculo);
        break;
    case 2:
        calculo=(62.1*altura)-44.7;
        printf("O peso ideal sera de =%.1f",calculo);
        break;
    default:
        printf("opcao invalida");
        break;
    }
    return 0;
}
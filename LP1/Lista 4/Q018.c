#include<stdio.h>
#include<math.h>
int main(){
    /*18. Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das seguintes médias de acordo com um valor numérico digitado pelo usuário mostrado na tabela a seguir.*/
    float numero1,numero2,numero3;
    int escolha;
    printf("Digite um numero inteiro:\n");
    scanf("%f",&numero1);
    printf("Digite outro numero:\n");
    scanf("%f",&numero2);
    printf("Digite um terceiro numero:\n");
    scanf("%f",&numero3);
    printf("Qual tipo de calculo deseja efetuar com esses valores?:\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("1-Geometrica:\n");
    printf("2-Ponderada:\n");
    printf("3-Harmonica:\n");
    printf("4-Aritmetica:\n");
    scanf("%d",&escolha);
    switch (escolha)
    {
    case 1:
        printf("O valor da expressao eh = %.1lf",cbrt(numero1*numero2*numero3));
        break;
    case 2:
        printf("O valor da expressao eh= %.1f",(((numero1)+(numero2*2)+(numero3*3))/6));
        break;
    case 3:
        printf("O valor da expressao eh= %.1f",(3/((1/numero1)+(1/numero2)+(1/numero3))));
        break;
    case 4:
        printf("O valor da expressao eh= %.1f",(numero1+numero2+numero3)/3);
        break;
    default: 
        printf("Opcao invalida:");  
        break;
    }
    return 0;
}
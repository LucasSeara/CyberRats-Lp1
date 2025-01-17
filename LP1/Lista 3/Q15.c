#include<stdio.h>
int main(){
    /*15. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas trabalhadas no mês, e exiba na tela o valor a ser pago ao funcionário, adicionando 10% sobre o valor calculado*/
    float v;
    int h;
    printf("Qual o valor da hora trabalhada em R$: \n");
    scanf("%f",&v);
    printf("O valor da hora eh %.1fR$\n",v);
    printf("Qual o numero de horas trabalhadas pelo funcionario esse mes: \n");
    scanf("%d",&h);
    float a =(v*h)*0.10;
    float sal = (v*h)+a;
    printf("O valor a ser pago ao funcionario eh de %0.1f",sal);
    return 0;
}
#include<stdio.h>
int main(){
    /*39. Crie um programa que leia o número de dias, o número de horas, o número de minutos e o número de segundos. Calcule e imprima o total em segundos.*/
    float d,h,m,s;
    printf("Digite o numero de dias: \n");
    scanf("%f",&d);
    printf("Digite o numero de horas: \n");
    scanf("%f",&h);
    printf("Digite o numero de minutos: \n");
    scanf("%f",&m);
    printf("Digite o numero de segundos: \n");
    scanf("%f",&s);
    float tot=(d*24*3600)+(h*3600)+(m*60)+s;
    printf("O total de segundo eh de %.0f",tot);
    return 0;
}
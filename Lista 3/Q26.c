#include<stdio.h>
int main(){
    /*26. Ler uma distância em milhas e apresentá-la convertida em quilômetros. A fórmula de conversão é: K = 1.61 × M, sendo K a distância em quilômetros e M em milhas*/
    float m;
    printf("Digite a distancia em milhas a ser convertida para km: \n");
    scanf("%f",&m);
    float km= 1.61*m;
    printf("A distancia em km eh = %.1f",km);
    return 0;
}
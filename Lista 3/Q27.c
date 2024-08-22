#include<stdio.h>
int main(){
    /*27. Ler uma distância em quilômetros e apresentá-la convertida em milhas. A fórmula de conversão é: M = K 1.61, sendo K a distância em quilômetros e M em milhas.*/
    float km;
    printf("Digite a distancia em km a ser convertida para milhas: \n");
    scanf("%f",&km);
    float m = km/1.61;
    printf("A distancia em milhas eh = %.1f",m);
    return 0;
}
#include<stdio.h>
int main(){
    /*22. Ler uma velocidade em km/h (quilômetros por hora) e apresentá-la convertida em m/s (metros por segundo). A fórmula de conversão é: M = K 3.6, sendo K a velocidade em km/h e M emm/s*/
    float km;
    printf("Digite a velocidade em km/h: \n");
    scanf("%f",&km);
    float m = (km)/3.6;
    printf("A velocidade em m/s eh %0.2f",m);
    return 0;
}
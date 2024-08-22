#include<stdio.h>
int main(){
    /*23. Ler uma velocidade em m/s (metros por segundo) e apresentá-la convertida em km/h (quilômetros por hora). A fórmula de conversão é: K = M × 3.6, sendo K a velocidade em km/h e M em m/s.*/
     float m;
    printf("Digite a velocidade em m/s: \n");
    scanf("%f",&m);
    float km = (m)*3.6;
    printf("A velocidade em k/h eh %0.2f",km);
    return 0;
}
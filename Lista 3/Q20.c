#include<stdio.h>
int main(){
    /*20. Ler uma temperatura em graus Kelvin e apresentá-la convertida em graus Celsius. A fórmula deconversão é: C = K − 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/
    float k;
    printf("Digite a temperatura em Kelvin a ser convertida para Celsius: \n");
    scanf("%f",&k);
    float c =k-273.15;
    printf("A temperatura em Celsius eh =%.2f",c);
    return 0;
}
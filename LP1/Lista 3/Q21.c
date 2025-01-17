#include<stdio.h>
int main(){
    /*21. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Kelvin. A fórmula de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.*/
    float c;
    printf("Digite a temperatura em Celsius a ser convertida para Kelvin: \n");
    scanf("%f",&c);
    float k =c+273.15;
    printf("A temperatura em Kelvin eh =%.2f",k);
    return 0;
}
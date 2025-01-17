#include<stdio.h>
int main(){
    /*2. Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
de conversão é: F = C ×*/
    float c;
    printf("Digite a temperatura em Celsius a ser convertida para Fahrenheit: \n");
    scanf("%f",&c);
    float f= c*1.8+32;
    printf("Sua temperatura em Fahrenheit eh %1.2f",f);
    return 0;
}
#include<stdio.h>
int main(){
    /*24. Ler um ângulo em graus e apresentá-lo convertido em radianos. A fórmula de conversão é: R = G × π 180 , sendo G o ângulo em graus e R em radianos e π = 3.14*/
    float g;
    float pi=3.14;
    printf("Digite um angulo em graus para ser convertido a radiano: \n");
    scanf("%f",&g);
    float r = (g*pi)/180;
    printf("O valor em radiano eh = %.2f",r);
    return 0;
}
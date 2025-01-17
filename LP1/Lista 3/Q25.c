#include<stdio.h>
int main(){
    /*25. Ler um ângulo em radianos e apresentá-lo convertido em graus. A fórmula de conversão é: G = R × 180 π, sendo G o ângulo em graus e R em radianos e π = 3.14.*/
    float r;
    float pi=3.14;
    printf("Digite um angulo em radianos para ser convertido a graus: \n");
    scanf("%f",&r);
    float g = (r*180)/pi;
    printf("O valor em graus eh = %.2f",g);
    return 0;
}
#include<stdio.h>
int main(){
    /*28. Ler um valor de comprimento em polegadas e apresentá-lo convertido em centímetros. A fórmula de conversão é: C = P × 2.54, sendo C o comprimento em centímetros e P o comprimento em polegadas.*/
    float p;
    printf("Digite o valor em polegadas a ser convertido para cm: \n");
    scanf("%f",&p);
    float cm= p*2.54;
    printf("O valor em cm= %.1f",cm);
    return 0;
}
#include<stdio.h>
int main(){
    /*29. Ler um valor de comprimento em centímetros e apresentá-lo convertido em polegadas. A fórmula de conversão é: P = C 2.54 , sendo C o comprimento em centímetros e P o comprimento em polegadas*/
    float cm;
    printf("Digite o valor em cm a ser convertido para polegadas: \n");
    scanf("%f",&cm);
    float p= cm/2.54;
    printf("O valor em polegadas= %.1f",p);
    return 0;
}
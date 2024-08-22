#include<stdio.h>
int main(){
    /*30. Ler um valor de volume em metros cúbicos (m3) e apresentá-lo convertido em litros. A fórmula de conversão é: L = 1000 × M, sendo L o volume em litros e M o volume em metros cúbicos.*/
    float m;
    printf("Digite um valor em metros cubicos: \n");
    scanf("%f",&m);
    float l=1000*m;
    printf("O valor convertido em litros eh = %.0f \n",l);
    return 0;
}
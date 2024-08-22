#include<stdio.h>
int main(){
    /*31. Ler um valor de volume em litros e apresentá-lo convertido em metros cúbicos (m3). A fórmula de conversão é: M =L /1000, sendo L o volume em litros e M o volume em metros cúbicos*/
    float l;
    printf("Digite o valor em litros a ser convertido para metros cubicos: \n");
    scanf("%f",&l);
    float m= l/1000;
    printf("O valor em metros cubicos eh = %.2f",m);
    return 0;
}
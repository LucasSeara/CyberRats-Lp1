#include<stdio.h>
int main(){
    /*32. Ler um valor de massa em quilogramas e apresentá-lo convertido em libras. A fórmula de conversão é: L = K × 2.2046, sendo K a massa em quilogramas e L a massa em libras.*/
    float kg;
    printf("Digite a massa em KG a ser convertido para libras: \n");
    scanf("%f",&kg);
    float l= kg*2.2046;
    printf("O valor em libras equivale a: %.2f",l);
    return 0;
}
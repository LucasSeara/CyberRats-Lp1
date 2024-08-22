#include<stdio.h>
int main(){
    /*33. Ler um valor de massa em libras e apresentá-lo convertido em quilogramas. A fórmula de conversão é: K =L/ 2.2046, sendo K a massa em quilogramas e L a massa em libras.*/
    float kg;
    printf("Digite a massa em KG a ser convertido para libras: \n");
    scanf("%f",&kg);
    float l= kg*2.2046;
    printf("O valor em libras equivale a: %.2f",l);
    return 0;
}
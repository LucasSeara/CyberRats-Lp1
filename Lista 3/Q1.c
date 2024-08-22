#include<stdio.h>
int main(){
    /*1. Efetuar a leitura de um número real e apresentar o resultado do quadrado desse número.*/
    float n1;
    printf("Digite um numero: \n");
    scanf("%f",&n1);
    float qua = n1*n1;
    printf("O quadrado de %1.2f eh %1.2f",n1,qua);
    return 0;
}
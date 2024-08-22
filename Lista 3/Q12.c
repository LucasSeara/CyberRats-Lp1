#include<stdio.h>
#include<math.h>
int main(){
    /*12. Sejam a e b os catetos de um triângulo onde a hipotenusa é obtida pela equação: hipotenusa = Faça um programa que entre com os valores de a e b, e ache o valor da hipotenusa através da
fórmula. Imprima o resultado.*/
    float a,b;
    printf("Digite o valor do primeiro cateto: \n");
    scanf("%f",&a);
    printf("Digite o valor do segundo cateto: \n");
    scanf("%f",&b);
    float hip = sqrt((a*a)+(b*b));
    printf("O valor da hipotenusa sera de %.2f",hip);
    return 0;
}
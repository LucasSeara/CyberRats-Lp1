#include<stdio.h>
#include<math.h>
int main(){
    /*40. Faça um programa que calcule a área de um triângulo, cujos lados são fornecidos pelo usuário. O programa deve validar se os lados fornecidos formam um triângulo. Se não formarem, deve ser exibida uma mensagem ao usuário. Se formarem, deve ser calculada a área do triângulo. Sejam a, b e c os lados do triângulo. Sabe-se que a área pode ser obtida pela fórmula: área = p s × (s − a) × (s − b) × (s − c) onde s é o semi-perímetro do triângulo s = a + b + c 2 .*/
    float a,b,c;
    printf("Digite o valor do lado A do triangulo: \n");
    scanf("%f",&a);
    printf("Digite o valor do lado B do triangulo: \n");
    scanf("%f",&b);
    printf("Digite o valor do lado C do triangulo: \n");
    scanf("%f",&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a) )
    {
        float s=(a+b+c)/2;
        float area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("A area do triangulo eh = %.2f",area);
    }else
    {
        printf("Os dados nao formam um triangulo");
    }
    return 0;
}
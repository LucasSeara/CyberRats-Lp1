#include<stdio.h>
int main(){
    /*10. Dados três valores, A, B e C, verifique se eles podem ser os lados de um triângulo. Se forem, classifique o triângulo como:*/
    int a,b,c;
    printf("Insira o primeiro lado do triangulo\n");
    scanf("%d",&a);
    printf("Insira o segundo lado do triangulo\n");
    scanf("%d",&b);
    printf("Insira o terceiro lado do triangulo\n");
    scanf("%d",&c);
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        if ((a==b)&&(a==c))
        {
            printf("O triangulo eh Equilatero");
        }else if ((a==b)||(a==c)||(b==c))
        {
            printf("Triangulo Isosceles");
        }else if ((a!=b)&&(a!=c))
        {
            printf("Triangulo Escaleno");
        }
    }else
    {
        printf("Nao eh um triangulo");
    }
    return 0;
}
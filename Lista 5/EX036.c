#include <stdio.h>
int main()
{
    /*Faça um programa que calcule a área de um triângulo, cuja base e altura são fornecidas pelo
usuário. Esse programa não pode permitir a entrada de dados inválidos, ou seja, medidas menores
ou iguais a 0.*/
    int base, altura;
    printf("Digite a base do triangulo:\n");
    scanf("%d", &base);
    printf("Digite a altura do triangulo:\n");
    scanf("%d", &altura);
    if (base <= 0)
    {
        printf("Numero invalido:\n");
    }
    else if (altura <= 0)
    {
        printf("Numero invalido:\n");
    }
    else
    {
       printf("A area do triangulo eh igual a %d",(base*altura)/2); 
    }
    return 0;
}
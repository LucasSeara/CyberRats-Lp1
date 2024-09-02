#include<stdio.h>  
int main(){
    /*Faça um algoritmo que calcule o IMC de uma pessoa e mostre sua classificação de acordo com a tabela abaixo*/
    double peso,altura,imc;
    printf("Digite seu peso:\n");
    scanf("%lf",&peso);
    printf("Digite sua altura:\n");
    scanf("%lf",&altura);
    imc=(peso/altura)/altura;
    if (imc<=18.5)
    {
        printf("Abaixo do peso");
    }else if (imc>18.5&&imc<=24.9)
    {
        printf("Saudavel");
    }else if (imc>=25&&imc<30)
    {
        printf("Peso em excesso");
    }else if (imc>=30&&imc<35)
    {
        printf("Obesidade Grau 1");
    }else if (imc>=35&&imc<40)
    {
        printf("Obesidade Grau 2 (severa)");
    }else
    {
        printf("Obesidade Grau 3 (morbida)");
    }    
    return 0;
}
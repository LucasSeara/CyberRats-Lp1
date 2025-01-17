#include<stdio.h>
int main(){
    /*7. Receber o salário de um funcionário, calcular e mostrar seu novo salário, sabendo que ele recebeu um aumento de 25%.*/
    float s;
    printf("Digite o salario do funcionario: \n");
    scanf("%f",&s);
    float a = (s*0.25)+s;
    printf("O salario apos reajuste sera de %2.1f",a);
    return 0;
}
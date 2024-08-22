#include<stdio.h>
int main(){
    /*38. Escreva um programa que pergunte o salário de um funcionário e calcule o valor do aumento. Para salários superiores a R$ 1250,00, calcule um aumento de 10%. Para inferiores ou iguais, de 15%.*/
    float sal;
    printf("Insira o salario: \n");
    scanf("%f",&sal);
    if (sal>1250)
    {
        float a=sal*0.1;
        sal=sal+a;
        printf("O salario com aumento de 10%% fica de %.1f",sal);
    }else
    {
        float a=sal*0.15;
        sal=sal+a;
        printf("O salario com aumento de 15%% fica de %.1f",sal);
    }
    return 0;
}
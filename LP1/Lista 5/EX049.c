#include<stdio.h>
int main(){
    /*Um funcionário recebe aumento anual. Em 1995, ele foi contratado por 2000 reais. Em 1996,
recebeu um aumento de 1,5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior.Faça um programa que determine o salario atual do funcionario*/
    double salario=2000;
    int i;
    float aumento=0.015;
    for ( i = 1996; i <= 2024; i++)
    {
        salario*=1+aumento;
        aumento *=2;
        printf("Em %i o salario foi de %.0lf\n",i,salario);
    }
    
    return 0;
}
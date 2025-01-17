#include <stdio.h>
int main()
{
    /*Uma empresa paga R$ 10,00 por hora normal trabalhada e R$ 15,00 por hora extra. Escreva
um programa que leia o total de horas normais e o total de horas extras trabalhadas por um
empregado em um ano e calcule o salário anual desse trabalhador.*/
    int horaNormal;
    int horaExtra;
    int salarioAnual;
    printf("Digite a quantidade de horas normais:\n");
    scanf("%d",&horaNormal);
    printf("Digite a quantidade de horas extras:\n");
    scanf("%d",&horaExtra);
    salarioAnual=(horaNormal*10)+(horaExtra*15);
    printf("O salario anual eh de %d",salarioAnual);

    
}